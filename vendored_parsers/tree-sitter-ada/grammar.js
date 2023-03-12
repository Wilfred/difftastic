/**
 * A case-insensitive keyword (copied from VHDL grammar)
 */
const reservedWord = word =>
   // word ||  // when debugging conflict error msgs
   alias(reserved(caseInsensitive(word)), word)
   ;
const reserved = regex => token(prec(2, new RegExp(regex)));
const caseInsensitive = word =>
  word.split('')
    .map(letter => `[${letter}${letter.toUpperCase()}]`)
    .join('');

/**
 * A list of rules
 */
function list_of(separator, rule) {
   return seq(
      rule,
      repeat(seq(
         separator,
         rule,
      )),
   );
}

/**
 * Handles comma-separated lists of rules
 */
function comma_separated_list_of(rule) {
   return list_of(',', rule)
}

module.exports = grammar({
   name: 'ada',

   extras: $ => [
      /\s|\\\r?\n/,
      $.comment,
   ],

   word: $ => $.identifier,

   conflicts: $ => [
      // ??? Maybe we can merge these
      [$.null_procedure_declaration, $._subprogram_specification],
      [$.expression_function_declaration, $._subprogram_specification],

      // "'for' identifier * 'use'"  could also be "'for' name * 'use'" as
      // specified in at_clause.
      [$.at_clause, $._name],

      // 'case' '(' identifier . '=>' ...
      [$._name, $.component_choice_list],

      // 'case' '(' _name '(' _discrete_range ')' . '=>'
      [$.slice, $._discrete_range],

      // 'case' '(' expression . ',' ...
      [$.record_component_association_list, $.positional_array_aggregate],

      // 'case' '[' iterated_element_association . ']'
      [$.value_sequence, $.array_component_association],

      // "procedure name is" could be either a procedure specification, or
      // a generic_instantiation.
      [$.generic_instantiation, $.procedure_specification],

      // identifier . ':' ...
      [$._defining_identifier_list, $.object_renaming_declaration,
         $.exception_renaming_declaration],
      [$._defining_identifier_list, $.object_renaming_declaration],
      [$._defining_identifier_list, $.object_renaming_declaration,
       $.loop_label, $.exception_renaming_declaration],
      [$._defining_identifier_list, $._name],

      // 'generic' . 'package' ...
      [$.generic_formal_part, $.generic_renaming_declaration],

      // 'type' identifier 'is' 'new' _subtype_indication . 'with'
      // could be either a record_extension_part or an aspect_specification.
      [$.derived_type_definition],

      // 'for' name 'use' '(' 'for' identifier 'in' name . 'use'
      [$.iterator_specification, $._subtype_indication],

      // 'type' identifier known_discriminant_part . 'is' ...
      // This could be either a _discriminant_part or known_discriminant_part,
      // the latter in case we are declaring a private type. We can't make the
      // difference until we have seen "private".
      [$.full_type_declaration, $._discriminant_part],

      // 'type' identifier 'is' 'new' _subtype_indication . 'with' .
      [$.private_extension_declaration, $.derived_type_definition],

      // 'generic' 'type' identifier 'is' 'new' _name . 'with' ...
      // The with could be either part of formal_derived_type_definition, as
      // "is new Foo with private", or an aspect
      // (via formal_complete_type_declaration)
      [$.formal_derived_type_definition],

      [$.function_call, $.procedure_call_statement],
      [$._name, $._aspect_mark],
      [$._name, $.package_body_stub],
      [$._name, $._subtype_indication],
      [$._name, $._subtype_indication, $.component_choice_list],
      [$.attribute_definition_clause, $._attribute_reference],
      [$.component_choice_list, $.discrete_choice],
      [$.component_choice_list, $.positional_array_aggregate],
      [$.discriminant_association, $._parenthesized_expression],
   ],
   inline: $ => [
      $._name_not_function_call,
      $._name_for_component_choice,
   ],

   rules: {
      compilation: $ => repeat(
         $.compilation_unit,
      ),

      identifier: $ =>
         /[a-zA-Z\u{80}-\u{10FFFF}][0-9a-zA-Z_\u{80}-\u{10FFFF}]*/u,
      gnatprep_identifier: $ =>
         /\$[a-zA-Z\u{80}-\u{10FFFF}][0-9a-zA-Z_\u{80}-\u{10FFFF}]*/u,
      comment: $ => token(seq('--', /.*/)),
      string_literal: $ => token(/"(""|[^"])*"/),
      character_literal: $ => token(/'.'/),
      numeric_literal: $ => token(
         choice(
            /[0-9][0-9_]*(\.[0-9_]+)?([eE][+-]?[0-9_]+)?/,
            /[0-9]+#[0-9a-fA-F._-]+#([eE][+-]?[0-9_]+)?/,
         )
      ),
      git_conflict_mark: $ => choice(
         token(seq(reservedWord('<<<<<<<'), /.*/)),
         token(seq(reservedWord('>>>>>>>'), /.*/)),
         token(seq(reservedWord('======='), /.*/)),
      ),
      relational_operator: $ => choice('=', '/=', '<', '<=', '>', '>='),
      binary_adding_operator: $ => choice('+', '-', '&'),
      unary_adding_operator: $ => choice('+', '-'),
      multiplying_operator: $ => choice('*', '/', 'mod', 'rem'),
      tick: $ => '\'',   // But is not the start of a character_literal

      _name_not_function_call: $ => choice(           // RM 4.1
         $.identifier,
         $.gnatprep_identifier,
         $.selected_component,
         $._attribute_reference,
         $.qualified_expression,
         $.target_name,
         $.slice,
         // $.explicit_dereference, // covered by $.selected_component
         $.character_literal,
         $.string_literal, // name of an operator. However, in a number of
                           // places using a string doesn't make sense.
      ),
      _name: $ => choice(           // RM 4.1
         $._name_not_function_call,
         $.function_call,
      ),
      _name_for_component_choice: $ => choice(
         // Do not allow slice, function_call,... as opposed to what RM allows
         $.identifier,
         $.string_literal,
      ),

      selected_component: $ => prec.left(seq(   // RM 4.1.3
         field('prefix', $._name),
         seq(
            '.',
            field('selector_name', choice(
               $.identifier,
               $.character_literal,
               $.string_literal,
            )),
         ),
      )),
      target_name: $ => '@',       // RM 5.2.1
      _name_list: $ => prec.left(comma_separated_list_of($._name)),
      _defining_identifier_list: $ => comma_separated_list_of($.identifier),
      slice: $ => seq(   // RM 4.1.2
         field('prefix', $._name),
         '(',
         $.range_g,  // ??? Should be a $._discrete_range, but then the
                     // following  Proc(Arr (1 .. 2)) is parsed as a slice of
                     // Proc, using a subtype_indication "Arr (1..2)"
//         $._discrete_range,
         ')',
      ),

      _attribute_reference: $ => choice(
         seq(
            $._name,
            $.tick,
            $.attribute_designator,
         ),
         $._reduction_attribute_reference,
      ),
      _reduction_attribute_reference: $ => seq(
         $.value_sequence,
         $.tick,
         $.reduction_attribute_designator,
      ),
      reduction_attribute_designator: $ => seq(
         $.identifier,
         '(',
         $.reduction_specification,
         ')',
      ),
      reduction_specification: $ => seq(
         $._name,
         ',',
         $.expression,
      ),
      value_sequence: $ => seq(
         '[',
          optional(seq(
               field('is_parallel', reservedWord('parallel')),
               optional(seq(
                  '(',
                  $.chunk_specification,
                  ')',
              )),
          )),
          $.iterated_element_association,
          ']',
      ),
      chunk_specification: $ => choice(
         $._simple_expression,
         seq(
            $.identifier,
            reservedWord('in'),
            $._discrete_subtype_definition,
         ),
      ),
      iterated_element_association: $ => seq(         // RM 4.3.5
         reservedWord('for'),
         choice(
            $.loop_parameter_specification,
            $.iterator_specification,
         ),
         optional(seq(
            reservedWord('use'),
            $.expression,
         )),
         '=>',
         $.expression,
      ),
      _discrete_subtype_definition: $ => choice(
         $._subtype_indication,
         $.range_g,
      ),
      loop_parameter_specification: $ => seq(
         $.identifier,
         reservedWord('in'),
         optional(reservedWord('reverse')),
         $._discrete_subtype_definition,
         optional($.iterator_filter),
      ),
      _loop_parameter_subtype_indication: $ => choice(
         $._subtype_indication,
         $.access_definition,
      ),
      iterator_filter: $ => seq(
         reservedWord('when'),
         field('condition', $.expression),
      ),
      iterator_specification: $ => seq(       // ARM 5.5.2
         $.identifier,
         optional(seq(
            ':',
            $._loop_parameter_subtype_indication,
         )),
         choice(
            reservedWord('in'),
            reservedWord('of'),
         ),
         optional(reservedWord('reverse')),
         field('iterator_name', $._name),
         optional($.iterator_filter),
      ),
      attribute_designator: $ => choice(   // ARM 4.1.4
         $.identifier,
         reservedWord('access'),
         reservedWord('delta'),
         reservedWord('digits'),
         reservedWord('mod'),
      ),
      qualified_expression: $ => seq(      // ARM 4.7
         field('subtype_name', $._name),
         $.tick,
         choice(
            $._aggregate,

            // In the RM grammar, this is a simple '(expression)', but
            // conditional expression would require a second nested pair of
            // parenthesis, whereas this is not mandatory anymore in the
            // text of the RM.
            //     seq('(', $.expression, ')'),
            $._parenthesized_expression,
         ),
      ),
      compilation_unit: $ => choice(
         $.with_clause,
         seq(
            optional(reservedWord('private')),
            $._declarative_item,
         ),
         $._statement,
         $.subunit,
         $.entry_declaration,
      ),
      _declarative_item: $ => choice(
         $._basic_declarative_item,
         $._proper_body,
         $.body_stub,
      ),
      _basic_declarative_item: $ => choice(
         $._basic_declaration,
         $._aspect_clause,
         $.use_clause,
      ),
      _basic_declaration: $ => choice(
         $._type_declaration,
         $.subtype_declaration,
         $.object_declaration,
         $.number_declaration,
         $.subprogram_declaration,
         $.expression_function_declaration,
         $.null_procedure_declaration,
         $.package_declaration,
         $._renaming_declaration,
         $.exception_declaration,
         $._generic_declaration,
         $.generic_instantiation,
      ),
      package_declaration: $ => seq(
         $._package_specification,
         ';',
      ),
      _package_specification: $ => seq(
         reservedWord('package'),
         field('name', $._name),
         optional($.aspect_specification),
         reservedWord('is'),
         repeat($._basic_declarative_item_pragma),
         optional(seq(
             reservedWord('private'),
             repeat($._basic_declarative_item_pragma),
         )),
         reservedWord('end'),
         field('endname', optional($._name)),
      ),
      with_clause: $ => seq(                 // ARM 10.1.2
         field('is_limited', optional(reservedWord('limited'))),
         field('is_private', optional(reservedWord('private'))),
         reservedWord('with'),
         $._name_list,
         ';',
      ),
      use_clause: $ => seq(                 // ARM 8.4
         reservedWord('use'),
         optional(seq(
            field('is_all', optional(reservedWord('all'))),
            field('is_type', reservedWord('type')),
         )),
         $._name_list,
         ';',
      ),
      subunit: $ => seq(   //  10.1.3
         reservedWord('separate'),
         '(',
         field('parent_unit_name', $._name),
         ')',
         $._proper_body,
      ),
      _proper_body: $ => choice(
         $.subprogram_body,
         $.package_body,
         $.task_body,
         $.protected_body,
      ),
      subprogram_body: $ => seq(      // ARM 6.3
         optional($.overriding_indicator),
         $._subprogram_specification,
         optional($.aspect_specification),
         reservedWord('is'),
         optional($.non_empty_declarative_part),
         reservedWord('begin'),
         $.handled_sequence_of_statements,
         reservedWord('end'),
         optional(field('endname', $._name)),
         ';'
      ),
      package_body: $ => seq(
         reservedWord('package'),
         reservedWord('body'),
         field('name', $._name),
         optional($.aspect_specification),
         reservedWord('is'),
         optional($.non_empty_declarative_part),
         optional(seq(
            reservedWord('begin'),
            $.handled_sequence_of_statements,
         )),
         reservedWord('end'),
         optional(field('endname', $._name)),
         ';',
      ),
      _subtype_indication: $ => seq(        // ARM 3.2.2
         optional($.null_exclusion),
         field('subtype_mark', $._name_not_function_call),
         optional($._constraint),
      ),
      discriminant_constraint: $ => choice(    // RM 3.7.1
         //  If we have a single positional discriminant, it can be an
         //  if-expression without additional parenthesis  "A : R (if cond then
         //  1 else 0)" but otherwise extra parenthesis are needed.
         $._parenthesized_expression,   // not in ARM
         seq(
            '(',
            comma_separated_list_of($.discriminant_association),
            ')',
         ),
      ),
      discriminant_association: $ => seq(  // RM 3.7.1
         optional(seq(
            list_of('|', $._name_for_component_choice),
            '=>',
         )),
         $.expression,
      ),
      _constraint: $ => choice(   // RM 3.2.2
         $._scalar_constraint,
         $.index_constraint,
         $.discriminant_constraint,
      ),
      _scalar_constraint: $ => choice(
         $.range_constraint,
         $.digits_constraint,
         $.delta_constraint,
      ),
      range_g: $ => choice(                         //  ARM 3.5
         field('range_attribute_reference', seq(    //  ARM 4.1.4
            field('prefix', $._name),
            $.tick,
            $.range_attribute_designator,
         )),
         seq(
            $._simple_expression,
            '..',
            $._simple_expression,
         ),
      ),
      range_attribute_designator: $ => seq(
         reservedWord('range'),
         optional(seq(
            '(',
            $.expression,
            ')',
         )),
      ),
      range_constraint: $ => seq(
         reservedWord('range'),
         $.range_g,
      ),
      expression: $ => choice(
         list_of(seq(reservedWord('and'), optional(reservedWord('then'))),
                 $._relation),
         list_of(seq(reservedWord('or'), optional(reservedWord('else'))),
                 $._relation),
         list_of(reservedWord('xor'), $._relation),
      ),
      _relation: $ => choice(                            // RM 4.4
         seq(
            $._simple_expression,
            optional(seq(
               $.relational_operator,
               $._simple_expression,
            )),
         ),
         $.relation_membership,
         $.raise_expression,                           // Added Ada 20x
      ),
      relation_membership: $ => seq(   //  Split from _relation RM 4.4
         $._simple_expression,
         optional(reservedWord('not')),
         reservedWord('in'),
         $.membership_choice_list,
      ),

      raise_expression: $ => prec.right(1, seq(        // ARM 11.3
         reservedWord('raise'),
         field('exception_name', $._name),
         optional(seq(
            reservedWord('with'),
            $._simple_expression,
         )),
      )),
      membership_choice_list: $ => prec.right(
         list_of('|', $._membership_choice),
      ),
      _membership_choice: $ => choice(
         $._simple_expression,
         $.range_g,
      ),
      _simple_expression: $ => seq(
         optional($.unary_adding_operator),
         $.term,
         repeat(seq(
            $.binary_adding_operator,
            $.term,
         )),
      ),

      // Keep term as an explicit node in the tree to resolve priorities of
      // operations.
      term: $ => seq(
         $._factor,
         repeat(seq(
            $.multiplying_operator,
            $._factor,
         )),
      ),
      _factor: $ => choice(     // ARM 4.4
         $._primary,
         $.factor_power,
         $.factor_abs,
         $.factor_not,
      ),
      factor_power: $ => seq(   // split from _factor to get tree node
         field('left', $._primary),
         '**',
         field('right', $._primary),
      ),
      factor_abs: $ => seq(   // split from _factor to get tree node
         reservedWord('abs'),
         $._primary,
      ),
      factor_not: $ => seq(   // split from _factor to get tree node
         reservedWord('not'),
         $._primary,
      ),

      _parenthesized_expression: $ => seq(
         '(',
         choice(
            $.expression,
            $._conditional_expression,
            $.quantified_expression,
            $.declare_expression,
         ),
         ')',
      ),

      // _primary might resolve as an '_aggregate', which might resolve as
      // a 'position_array_aggregate', so an expression like
      //     case ( .. )
      // is ambiguous. So we raise the priority here.
      _primary: $ => prec(2, choice(                        // RM 4.4
         $.numeric_literal,
         $.primary_null,
         $._aggregate,
         field('name', $._name),
         $.allocator,
         $._parenthesized_expression,
      )),
      primary_null: $ => reservedWord('null'),   //  Split from _primary

      allocator: $ => seq(
         reservedWord('new'),
         optional($.subpool_specification),
         $._subtype_indication_paren_constraint,
      ),
      _subtype_indication_paren_constraint: $ => seq(
         optional($.null_exclusion),
         $._name,
         optional($.index_constraint),
      ),
      subpool_specification: $ => seq(
         '(',
         field('subpool_handle_name', $._name),
         ')',
      ),
      _access_type_definition: $ => seq(     // ARM 3.10
         optional($.null_exclusion),
         choice(
            $.access_to_object_definition,
            $.access_to_subprogram_definition,
         ),
      ),
      access_to_subprogram_definition: $ => seq(    // ARM 3.10
         reservedWord('access'),
         optional(reservedWord('protected')),
         choice(
            seq(
               reservedWord('procedure'),
               optional($.formal_part),  // parameter_profile, ARM 6.1
            ),
            seq(
               reservedWord('function'),
               $._parameter_and_result_profile,
            ),
         ),
      ),
      access_to_object_definition: $ => seq(
         reservedWord('access'),
         optional($.general_access_modifier),
         $._subtype_indication,
      ),
      general_access_modifier: $ => choice(
         reservedWord('all'),
         reservedWord('constant'),
      ),
      access_definition: $ => seq(          // ARM 3.10
         optional($.null_exclusion),
         reservedWord('access'),
         choice(
            seq(
               optional(reservedWord('constant')),
               field('subtype_mark', $._name),
            ),
            seq(
               optional(reservedWord('protected')),
               reservedWord('procedure'),
               optional($.formal_part),
            ),
            seq(
               optional(reservedWord('protected')),
               reservedWord('function'),
               $._parameter_and_result_profile,
            ),
         ),
      ),
      actual_parameter_part: $ => seq(    // ARM 6.4
         '(',
         choice(
            comma_separated_list_of($.parameter_association),

            // Those are not in the ARM, but added here for generic
            // instantiations, which get the actual parameter part via $._name
            // and its $.function_call
            // ????
            $._conditional_expression,
            $.quantified_expression,
            $.declare_expression,
         ),
         ')',
      ),

      // RM 6.4, but this one also handles parameters for generic
      // instantiations.
      parameter_association: $ => choice(
         seq(
            $.component_choice_list,
            '=>',
            choice(
               $.expression,
               '<>',
            ),
         ),
         $.expression,
         '<>',
       ),
      _conditional_expression: $ => choice(
         $.if_expression,
         $.case_expression,
      ),
      _conditional_quantified_expression: $ => choice(
         $.if_expression,
         $.case_expression,
         $.quantified_expression,
      ),
      quantified_expression: $ => seq(          // ARM 4.5.8
         reservedWord('for'),
         $.quantifier,
         choice(
            $.loop_parameter_specification,
            $.iterator_specification,
         ),
         '=>',
         field('predicate', $.expression),
      ),
      declare_expression: $ => seq(
         reservedWord('declare'),
         repeat($._declare_item),
         reservedWord('begin'),
         $.expression,
      ),
      _declare_item: $ => choice(
         $.object_declaration,
         $.object_renaming_declaration,
      ),
      quantifier: $ => choice(
         reservedWord('all'),
         reservedWord('some'),
      ),
      case_expression: $ => seq(                         // RM 4.5.7
         reservedWord('case'),
         $.expression,
         reservedWord('is'),
         comma_separated_list_of($.case_expression_alternative),
      ),
      case_expression_alternative: $ => seq(             // RM 4.5.7
         reservedWord('when'),
         $.discrete_choice_list,
         '=>',
         $.expression,
      ),
      component_choice_list: $ => choice(                 // RM 4.3.1
         reservedWord('others'),
         list_of('|', $._name_for_component_choice),
      ),
      _aggregate: $ => choice(                            // RM 4.3
         $.record_aggregate,
         $.extension_aggregate,
         $._array_aggregate,
         $._delta_aggregate,                              // Ada 20x
      ),
      _delta_aggregate: $ => choice(
         $.record_delta_aggregate,
         $.array_delta_aggregate,
      ),
      extension_aggregate: $ => seq(
         '(',
         $.expression,
         reservedWord('with'),
         $._record_component_association_list_or_expression,
         ')',
      ),
      record_delta_aggregate: $ => seq(
         '(',
         $.expression,
         reservedWord('with'),
         reservedWord('delta'),
         $._record_component_association_list_or_expression,
         ')',
      ),
      array_delta_aggregate: $ => choice(
         seq(
            '(',
            $.expression,
            reservedWord('with'),
            reservedWord('delta'),
            $._array_component_association_list,
            ')',
         ),
         seq(
            '[',
            $.expression,
            reservedWord('with'),
            reservedWord('delta'),
            $._array_component_association_list,
            ']',
         ),
      ),
      record_aggregate: $ => seq(
         '(',
         $.record_component_association_list,
         ')',
      ),

      // Either:
      // *  'null record'
      // *  expression, {expression_or_named}
      //    expression_or_named:: expression | choice => expression
      // *  named {, named}
      record_component_association_list: $ => choice(    // RM 4.3.1
         seq(
            reservedWord('null'),
            reservedWord('record'),
         ),
         seq(
            $.expression,
            ',',   //  Need at least two components with positional
            comma_separated_list_of(choice(
               $.expression,
               $._named_record_component_association,
            )),
         ),
         comma_separated_list_of($._named_record_component_association),
      ),

      // We have modified record_component_association_list to accept a
      // minimum of two positional expressions. However, in extension
      // aggregates it is valid to have just "(parent with value)"
      _record_component_association_list_or_expression: $ => choice(
         $.record_component_association_list,
         $.expression,
      ),

      _named_record_component_association: $ => seq(  // adapted from ARM 4.3.1
         $.component_choice_list,
         '=>',
         choice(
            $.expression,
            '<>',
         ),
      ),
      null_exclusion: $ => seq(
         reservedWord('not'),
         reservedWord('null'),
      ),
      index_constraint: $ => seq(    // RM 3.6.1
         '(',
         comma_separated_list_of($._discrete_range),
         ')',
      ),
      digits_constraint: $ => seq(
         reservedWord('digits'),
         $._simple_expression,
         optional($.range_constraint),
      ),
      delta_constraint: $ => seq(
         reservedWord('delta'),
         $._simple_expression,
         optional($.range_constraint),
      ),
      _basic_declarative_item_pragma: $ => choice(
         $._basic_declarative_item,
         $.pragma_g,
      ),
      _type_declaration: $ => choice(
         $.full_type_declaration,
         $.incomplete_type_declaration,
         $.private_type_declaration,
         $.private_extension_declaration,
      ),
      full_type_declaration: $ => choice(
         seq(
            reservedWord('type'),
            $.identifier,
            optional($.known_discriminant_part),
            reservedWord('is'),
            $._type_definition,
            optional($.aspect_specification),
            ';',
         ),
         $.task_type_declaration,
         $.protected_type_declaration,
      ),
      private_type_declaration: $ => seq(
         reservedWord('type'),
         $.identifier,
         optional($._discriminant_part),
         reservedWord('is'),
         optional(seq(
            optional(reservedWord('abstract')),
            reservedWord('tagged'),
         )),
         optional(reservedWord('limited')),
         reservedWord('private'),
         optional($.aspect_specification),
         ';',
      ),
      private_extension_declaration: $ => seq(
         reservedWord('type'),
         $.identifier,
         optional($._discriminant_part),
         reservedWord('is'),
         optional(reservedWord('abstract')),
         optional(choice(
            reservedWord('limited'),
            reservedWord('synchronized'),
         )),
         reservedWord('new'),
         $._subtype_indication,
         optional(seq(
            reservedWord('and'),
            $._interface_list,
         )),
         reservedWord('with'),
         reservedWord('private'),
         optional($.aspect_specification),
         ';',
      ),
      _discriminant_part: $ => choice(   // ARM 3.7
         $.known_discriminant_part,
         $.unknown_discriminant_part,
      ),
      unknown_discriminant_part: $ => seq(   // ARM 3.7
         '(',
         '<>',
         ')',
      ),
      known_discriminant_part: $ => seq(   // ARM 3.7
         '(',
         $.discriminant_specification_list,
         ')',
      ),
      incomplete_type_declaration: $ => seq(
         reservedWord('type'),
         $.identifier,
         optional($._discriminant_part),
         optional(seq(
            reservedWord('is'),
            reservedWord('tagged'),
         )),
         ';',
      ),
      discriminant_specification_list: $ =>
         prec.right(list_of(';', $.discriminant_specification)),
      discriminant_specification: $ => seq(     // ARM 3.7
         $._defining_identifier_list,
         ':',
         choice(
            seq(
               optional($.null_exclusion),
               field('subtype_mark', $._name),
            ),
            $.access_definition,
         ),
         optional($._assign_value),
      ),
      _type_definition: $ => choice(
         $.enumeration_type_definition,
         $._integer_type_definition,
         $._real_type_definition,
         $.array_type_definition,
         $.record_type_definition,
         $._access_type_definition,
         $.derived_type_definition,
         $.interface_type_definition,
      ),
      array_type_definition: $ => seq(  // merges constrained and unconstrained
         reservedWord('array'),
         '(',
         choice(
            $._discrete_subtype_definition_list,
            $._index_subtype_definition_list,
         ),
         ')',
         reservedWord('of'),
         $.component_definition,
      ),
      _discrete_subtype_definition_list: $ =>
         comma_separated_list_of($._discrete_subtype_definition),
      _discrete_subtype_definition: $ => choice(
         $._subtype_indication,
         $.range_g,
      ),
      _discrete_range: $ => choice(  //  3.6.1 == _discrete_subtype_definition
         $._subtype_indication,
         $.range_g,
      ),
      _index_subtype_definition_list: $ =>
         comma_separated_list_of($.index_subtype_definition),
      index_subtype_definition: $ => seq(             // ARM 3.6
         field('subtype_mark', $._name),
         reservedWord('range'),
         '<>',
      ),
      enumeration_type_definition: $ => seq(
         '(',
         $._enumeration_literal_list,
         ')',
      ),
      _enumeration_literal_list: $ =>
         comma_separated_list_of($._enumeration_literal_specification),
      _enumeration_literal_specification: $ => choice(
         $.identifier,
         $.character_literal,
      ),
      _integer_type_definition: $ => choice(
         $.signed_integer_type_definition,
         $.modular_type_definition,
      ),
      modular_type_definition: $ => seq(
         reservedWord('mod'),
         $.expression,
      ),
      _real_type_definition: $ => choice(
         $.floating_point_definition,
         $._fixed_point_definition,
      ),
      floating_point_definition: $ => seq(
         reservedWord('digits'),
         $.expression,
         optional($.real_range_specification),
      ),
      real_range_specification: $ => seq(
         reservedWord('range'),
         $._simple_expression,
         '..',
         $._simple_expression,
      ),
      _fixed_point_definition: $ => choice(
         $.ordinary_fixed_point_definition,
         $.decimal_fixed_point_definition,
      ),
      decimal_fixed_point_definition: $ => seq(
         reservedWord('delta'),
         $.expression,
         reservedWord('digits'),
         $.expression,
         optional($.real_range_specification),
      ),
      ordinary_fixed_point_definition: $ => seq(
         reservedWord('delta'),
         $.expression,
         $.real_range_specification,
      ),
      signed_integer_type_definition: $ => seq(
         reservedWord('range'),
         $._simple_expression,
         '..',
         $._simple_expression,
      ),
      derived_type_definition: $ => seq(
         optional(reservedWord('abstract')),
         optional(reservedWord('limited')),
         reservedWord('new'),
         $._subtype_indication,
         optional(seq(
            optional(seq(
               reservedWord('and'),
               $._interface_list,
            )),
            $.record_extension_part,
         )),
      ),
      interface_type_definition: $ => seq(
         optional(choice(
            reservedWord('limited'),
            reservedWord('task'),
            reservedWord('protected'),
            reservedWord('synchronized'),
         )),
         reservedWord('interface'),
         optional(seq(
            reservedWord('and'),
            $._interface_list,
         )),
      ),
      _interface_list: $ =>
         list_of(reservedWord('and'), $._name),
      record_extension_part: $ => seq(
         reservedWord('with'),   // record_extension_part in Ada grammar
         $.record_definition,
      ),
      record_type_definition: $ => seq(
         optional(seq(
            optional(reservedWord('abstract')),
            reservedWord('tagged'),
         )),
         optional(reservedWord('limited')),
         $.record_definition,
      ),
      record_definition: $ => choice(
         seq(
            reservedWord('record'),
            $.component_list,
            reservedWord('end'),
            reservedWord('record'),
            optional($.identifier),
         ),
         seq(
            reservedWord('null'),
            reservedWord('record'),
         ),
      ),
      component_list: $ => choice(   //  RM 3.8
         repeat1($._component_item),
         seq(
            repeat($._component_item),
            $.variant_part,
         ),
         seq(
            reservedWord('null'),
            reservedWord(';'),
         ),
      ),
      _component_item: $ => choice(
         $.component_declaration,
         $._aspect_clause,
         $.pragma_g,    // not in RM
      ),
      component_declaration: $ => seq(    // RM 3.8
         $._defining_identifier_list,
         ':',
         $.component_definition,
         optional($._assign_value),
         optional($.aspect_specification),
         ';'
      ),
      component_definition: $ => seq(
         optional(reservedWord('aliased')),
         choice(
            $._subtype_indication,
            $.access_definition,
         ),
      ),
      _array_aggregate: $ => choice(
         $.positional_array_aggregate,
         $.null_array_aggregate,
         $.named_array_aggregate,
      ),
      positional_array_aggregate: $ => choice(   //  4.3.3
         seq(
            '(',
            $.expression,
            ',',
            prec.left(1, comma_separated_list_of($.expression)),
            ')',
         ),
         seq(
            '(',
            comma_separated_list_of($.expression),
            ',',
            reservedWord('others'),
            '=>',
            choice(
               $.expression,
               '<>',
            ),
            ')',
         ),
         seq(
            '[',
            comma_separated_list_of($.expression),
            optional(seq(
               ',',
               reservedWord('others'),
               '=>',
               choice(
                  $.expression,
                  '<>',
               ),
            )),
            ']',
         ),
      ),
      null_array_aggregate: $ => seq(
         '[',
         ']',
      ),
      named_array_aggregate: $ => choice(
         seq('(', $._array_component_association_list, ')'),
         seq('[', $._array_component_association_list, ']'),
      ),
      _array_component_association_list: $ =>
         comma_separated_list_of($.array_component_association),
      array_component_association: $ => choice(    // ARM 4.3.3
         seq(
            $.discrete_choice_list,
            '=>',
            choice(
               $.expression,
               '<>',
            ),
         ),
         $.iterated_element_association,
      ),
      discrete_choice_list: $ => list_of('|', $.discrete_choice),
      discrete_choice: $ => choice(    // ARM 3.8.1
         $.expression,
         $._subtype_indication,
         $.range_g,
         reservedWord('others'),
      ),
      aspect_association: $ => seq(
         $._aspect_mark,
         optional(seq(
            '=>',
            $._aspect_definition,
         )),
      ),
      _aspect_clause: $ => choice(
         $.attribute_definition_clause,
         $.enumeration_representation_clause,
         $.record_representation_clause,
         $.at_clause,
      ),
      _aspect_definition: $ => choice(
         $.expression,
         $.global_aspect_definition,
      ),
      _aspect_mark: $ => seq(   // ARM 13.1.1
         $.identifier,
         optional(seq(
            $.tick,
            reservedWord('Class'),
         )),
      ),
      aspect_mark_list: $ => comma_separated_list_of($.aspect_association),
      aspect_specification: $ => seq(
         reservedWord('with'),
         $.aspect_mark_list,
      ),
      _assign_value: $ => seq(
         ':=',
         $.expression,
      ),
      at_clause: $ => seq(
         reservedWord('for'),
         $.identifier,
         reservedWord('use'),
         reservedWord('at'),
         $.expression,
         ';',
      ),
      attribute_definition_clause: $ => seq(      // ARM 13.3
         reservedWord('for'),
         field('local_name', $._name),
         $.tick,
         $.attribute_designator,
         reservedWord('use'),
         $.expression,
         ';',
      ),
      body_stub: $ => choice(
         $.subprogram_body_stub,
         $.package_body_stub,
         $.task_body_stub,
         $.protected_body_stub,
      ),
      subprogram_body_stub: $ => seq(
         optional($.overriding_indicator),
         $._subprogram_specification,
         reservedWord('is'),
         reservedWord('separate'),
         optional($.aspect_specification),
         ';',
      ),
      package_body_stub: $ => seq(
         reservedWord('package'),
         reservedWord('body'),
         $.identifier,
         reservedWord('is'),
         reservedWord('separate'),
         optional($.aspect_specification),
         ';',
      ),
      task_body: $ => seq(
         reservedWord('task'),
         reservedWord('body'),
         $.identifier,
         optional($.aspect_specification),
         reservedWord('is'),
         optional($.non_empty_declarative_part),
         reservedWord('begin'),
         $.handled_sequence_of_statements,
         reservedWord('end'),
         optional($.identifier),
         ';',
      ),
      task_body_stub: $ => seq(
         reservedWord('task'),
         reservedWord('body'),
         $.identifier,
         reservedWord('is'),
         reservedWord('separate'),
         optional($.aspect_specification),
         ';',
      ),
      _protected_operation_declaration: $ => choice(
         $.subprogram_declaration,
         $.pragma_g,
         $.entry_declaration,
         $._aspect_clause,
      ),
      _protected_element_declaration: $ => choice(
         $._protected_operation_declaration,
         $.component_declaration,
      ),
      _protected_operation_item: $ => choice(
         $.subprogram_declaration,
         $.subprogram_body,
         $.null_procedure_declaration,
         $.expression_function_declaration,
         $.entry_body,
         $._aspect_clause,
      ),
      protected_definition: $ => seq(
         repeat($._protected_operation_declaration),
         optional(seq(
            reservedWord('private'),
            repeat($._protected_element_declaration),
         )),
         reservedWord('end'),
         optional($.identifier),
      ),
      protected_type_declaration: $ => seq(
         reservedWord('protected'),
         reservedWord('type'),
         $.identifier,
         optional($.known_discriminant_part),
         optional($.aspect_specification),
         reservedWord('is'),
         optional(seq(
            reservedWord('new'),
            $._interface_list,
            reservedWord('with'),
         )),
         $.protected_definition,
         ';',
      ),
      single_protected_declaration: $ => seq(
         reservedWord('protected'),
         $.identifier,
         optional($.aspect_specification),
         reservedWord('is'),
         optional(seq(
            reservedWord('new'),
            $._interface_list,
            reservedWord('with'),
         )),
         $.protected_definition,
         ';',
      ),
      protected_body: $ => seq(
         reservedWord('protected'),
         reservedWord('body'),
         $.identifier,
         optional($.aspect_specification),
         reservedWord('is'),
         repeat($._protected_operation_item),
         reservedWord('end'),
         optional($.identifier),
         ';',
      ),
      protected_body_stub: $ => seq(
         reservedWord('protected'),
         reservedWord('body'),
         $.identifier,
         reservedWord('is'),
         reservedWord('separate'),
         optional($.aspect_specification),
         ';',
      ),
      choice_parameter_specification: $ => $.identifier,  // ??? inline
      component_clause: $ => seq(             // ARM 13.5.1
         field('local_name', $._name),
         reservedWord('at'),
         field('position', $.expression),
         reservedWord('range'),
         field('first_bit', $._simple_expression),
         '..',
         field('last_bit', $._simple_expression),
         ';',
      ),
      _declarative_item_pragma: $ => choice(
         $._declarative_item,
         $.pragma_g,
         $.gnatprep_declarative_if_statement,
      ),

      // Although it doesn't add any new character, we keep this rule as an
      // expplicit node in the tree for the sake of queries
      non_empty_declarative_part: $ => repeat1(
         $._declarative_item_pragma,
      ),
      entry_declaration: $ => seq(
         optional($.overriding_indicator),
         reservedWord('entry'),
         field('entry_name', $.identifier),
         optional(seq(
            '(',
            $._discrete_subtype_definition,
            ')',
         )),
         optional($.formal_part),
         optional($.aspect_specification),
         ';',
      ),
      entry_body: $ => seq(
         reservedWord('entry'),
         $.identifier,
         optional($.non_empty_entry_body_formal_part),
         optional($.aspect_specification),
         $.entry_barrier,
         reservedWord('is'),
         optional($.non_empty_declarative_part),
         reservedWord('begin'),
         $.handled_sequence_of_statements,
         reservedWord('end'),
         optional($.identifier),
         ';',
      ),
      entry_barrier: $ => seq(
         reservedWord('when'),
         field('condition', $.expression),
      ),
      entry_index_specification: $ => seq(
         reservedWord('for'),
         $.identifier,
         reservedWord('in'),
         $._discrete_subtype_definition,
      ),
      enumeration_aggregate: $ => $._array_aggregate,  //  ??? inline  ARM 13.4
      enumeration_representation_clause: $ => seq(    // ARM 13.4
         reservedWord('for'),
         field('local_name', $._name),
         reservedWord('use'),
         $.enumeration_aggregate,
         ';',
      ),
      exception_choice_list: $ => list_of('|', $.exception_choice),
      exception_choice: $ => choice(    // ARM 11.2
         field('exception_name', $._name),
         reservedWord('others'),
      ),
      exception_declaration: $ => seq(
         $._defining_identifier_list,
         ':',
         reservedWord('exception'),
         optional($.aspect_specification),
         ';',
      ),
      exception_handler: $ => seq(  // RM 11.2
         reservedWord('when'),
         optional(seq(
            $.choice_parameter_specification,
            ':',
         )),
         $.exception_choice_list,
         '=>',
         $._sequence_of_statements,
      ),
      formal_part: $ => seq(    // ARM 6.1
         '(',
         $._parameter_specification_list,
         ')',
      ),
      function_specification: $ => seq(
         reservedWord('function'),
         field('name', $._name),
         $._parameter_and_result_profile,
      ),
      _generic_declaration: $ => choice(
         $.generic_subprogram_declaration,
         $.generic_package_declaration,
      ),
      generic_formal_part: $ => seq(
         reservedWord('generic'),
         repeat($._generic_formal_parameter_declaration),
      ),
      _generic_formal_parameter_declaration: $ => choice(
         $.formal_object_declaration,
         $._formal_type_declaration,
         $.formal_subprogram_declaration,
         $.formal_package_declaration,
         $.use_clause,
         $.pragma_g,
      ),
      generic_subprogram_declaration: $ => seq(
         $.generic_formal_part,
         $._subprogram_specification,
         optional($.aspect_specification),
         ';',
      ),
      generic_package_declaration: $ => seq(
         $.generic_formal_part,
         $.package_declaration,
      ),
      generic_instantiation: $ => seq(     // ARM 12.3
         choice(
            seq(
               reservedWord('package'),
               field('name', $._name),
            ),
            seq(
               optional($.overriding_indicator),
               choice(
                  seq(
                     reservedWord('procedure'),
                     field('name', $._name),
                  ),
                  seq(
                     reservedWord('function'),
                     field('name', $._name),
                  ),
               ),
            ),
         ),
         reservedWord('is'),
         reservedWord('new'),
         field('generic_name', $._name),   //  includes the generic_actual_part (via the function call)
         optional($.aspect_specification),
         ';',
      ),
      formal_object_declaration: $ => choice(   // ARM 12.4
         seq(
            field('name', $._defining_identifier_list),
            ':',
            optional($.non_empty_mode),
            optional($.null_exclusion),
            field('subtype_mark', $._name),
            optional($._assign_value),
            optional($.aspect_specification),
            ';',
         ),
         seq(
            $._defining_identifier_list,
            ':',
            optional($.non_empty_mode),
            $.access_definition,
            optional($._assign_value),
            optional($.aspect_specification),
            ';',
         ),
      ),
      _formal_type_declaration: $ => choice(
         $.formal_complete_type_declaration,
         $.formal_incomplete_type_declaration,
      ),
      formal_complete_type_declaration: $ => seq(    // ARM 12.5
         reservedWord('type'),
         $.identifier,
         optional($._discriminant_part),
         reservedWord('is'),
         $._formal_type_definition,
         optional(seq(
            reservedWord('or'),
            reservedWord('use'),
            field('default_subtype_mark', $._name),
         )),
         optional($.aspect_specification),
         ';',
      ),
      formal_incomplete_type_declaration: $ => seq(
         reservedWord('type'),
         $.identifier,
         optional($._discriminant_part),
         optional(seq(
            reservedWord('is'),
            reservedWord('tagged'),
         )),
         optional(seq(
            reservedWord('or'),
            reservedWord('use'),
            field('default_subtype_mark', $._name),
         )),
         ';',
      ),
      _formal_type_definition: $ => choice(
         $.formal_private_type_definition,
         $.formal_derived_type_definition,
         $.formal_discrete_type_definition,
         $.formal_signed_integer_type_definition,
         $.formal_modular_type_definition,
         $.formal_floating_point_definition,
         $.formal_ordinary_fixed_point_definition,
         $.formal_decimal_fixed_point_definition,
         $.formal_array_type_definition,
         $.formal_access_type_definition,
         $.formal_interface_type_definition,
      ),
      formal_private_type_definition: $ => seq(
         optional(seq(
            optional(reservedWord('abstract')),
            reservedWord('tagged'),
         )),
         optional(reservedWord('limited')),
         reservedWord('private'),
      ),
      formal_derived_type_definition: $ => seq(     // ARM 12.5.1
         optional(reservedWord('abstract')),
         optional(choice(
            reservedWord('limited'),
            reservedWord('synchronized'),
         )),
         reservedWord('new'),
         field('subtype_mark', $._name),
         optional(seq(
            optional(seq(
               reservedWord('and'),
               $._interface_list,
            )),
            reservedWord('with'),
            reservedWord('private'),
         )),
      ),
      formal_discrete_type_definition: $ => seq(
         '(',
         '<>',
         ')',
      ),
      formal_signed_integer_type_definition: $ => seq(
         reservedWord('range'),
         '<>',
      ),
      formal_modular_type_definition: $ => seq(
         reservedWord('mod'),
         '<>',
      ),
      formal_floating_point_definition: $ => seq(
         reservedWord('digits'),
         '<>',
      ),
      formal_ordinary_fixed_point_definition: $ => seq(
         reservedWord('delta'),
         '<>',
      ),
      formal_decimal_fixed_point_definition: $ => seq(
         reservedWord('delta'),
         '<>',
         reservedWord('digits'),
         '<>',
      ),
      formal_array_type_definition: $ => $.array_type_definition,
      formal_access_type_definition: $ => $._access_type_definition,
      formal_interface_type_definition: $ => $.interface_type_definition,
      formal_subprogram_declaration: $ => choice(
         $.formal_concrete_subprogram_declaration,
         $.formal_abstract_subprogram_declaration,
      ),
      formal_concrete_subprogram_declaration: $ => seq(
         reservedWord('with'),
         $._subprogram_specification,
         optional(seq(
            reservedWord('is'),
            $.subprogram_default,
         )),
         optional($.aspect_specification),
         ';',
      ),
      formal_abstract_subprogram_declaration: $ => seq(
         reservedWord('with'),
         $._subprogram_specification,
         reservedWord('is'),
         reservedWord('abstract'),
         optional($.subprogram_default),
         optional($.aspect_specification),
         ';',
      ),
      subprogram_default: $ => choice(
         field('default_name', $._name),
         '<>',
         reservedWord('null'),
      ),
      formal_package_declaration: $ => seq(     // ARM 12.7
         reservedWord('with'),
         reservedWord('package'),
         $.identifier,
         reservedWord('is'),
         reservedWord('new'),
         field('generic_package_name', $._name),
         optional($.aspect_specification),
         ';',
      ),
      formal_group_designator: $ => choice(
         'null',
         'all',
      ),
      //      extended_global_aspect_definition: $ => choice(
      //         seq(
      //            reservedWord('use'),
      //            field('formal_parameter_designator', choice(
      //               $.formal_group_designator,
      //               field('name', $._name),
      //            )),
      //         ),
      //         seq(
      //            reservedWord('do'),
      //            $.dispatching_operation_specifier,
      //         ),
      //      ),
//      dispatching_operation_specifier: $ => seq(
//         $._name,
//         '(',
//         $._name,
//         ')',
//      ),
      extended_global_aspect_element: $ => choice(
         seq(
            reservedWord('use'),
            field('formal_parameter_set', choice(
               $.formal_group_designator,
               comma_separated_list_of($._name),
            )),
         ),
//         seq(
//            reservedWord('do'),
//            comma_separated_list_of($.dispatching_operation_specifier),
//         ),
      ),
      global_aspect_definition: $ => choice(     // ARM 6.1.2
         seq(
            $.global_mode,
//            $.global_designator,
         ),
//         $.extended_global_aspect_definition,
         seq(
            '(',
            comma_separated_list_of($.global_aspect_element),
            ')',
         ),
      ),
      global_aspect_element: $ => choice(
         seq(
            $.global_mode,
            field('global_set', $._name_list),
         ),
//         $.extended_global_aspect_definition,
      ),
      global_mode: $ => choice(
         $.non_empty_mode,
         reservedWord('overriding'),
      ),
      handled_sequence_of_statements: $ => seq(
         $._sequence_of_statements,
         optional(seq(
            reservedWord('exception'),
            repeat1($.exception_handler),
         )),
      ),
      loop_label: $ => seq(    // matches label_opt in ada-mode grammar
         field('statement_identifier', $.identifier),
         ':',
      ),
      label: $ => seq(
         '<<',
         field('statement_identifier', $.identifier),
         '>>',
      ),
      mod_clause: $ => seq(
         reservedWord('at'),
         reservedWord('mod'),
         $.expression,
         ';',
      ),
      non_empty_mode: $ => choice(   // ARM 6.1
         reservedWord('in'),
         seq(
            reservedWord('in'),
            reservedWord('out'),
         ),
         reservedWord('out'),
      ),
      null_procedure_declaration: $ => seq(
         optional($.overriding_indicator),
         $.procedure_specification,
         reservedWord('is'),
         reservedWord('null'),
         optional($.aspect_specification),
         ';',
      ),
      null_statement: $ => seq(
         reservedWord('null'),
         ';',
      ),
      number_declaration: $ => seq(
         $._defining_identifier_list,
         ':',
         reservedWord('constant'),
         $._assign_value,
         ';',
      ),
      object_declaration: $ => choice(
         seq(
            field('name', $._defining_identifier_list),
            ':',
            optional(reservedWord('aliased')),
            optional(reservedWord('constant')),
            choice(
               $._subtype_indication,
               $.access_definition,
               $.array_type_definition,
            ),
            optional($._assign_value),
            optional($.aspect_specification),
            ';',
         ),
         $.single_task_declaration,
         $.single_protected_declaration,
      ),
      single_task_declaration: $ => seq(
         reservedWord('task'),
         $.identifier,
         optional($.aspect_specification),
         optional(seq(
            reservedWord('is'),
            optional(seq(
               reservedWord('new'),
               $._interface_list,
               reservedWord('with'),
            )),
            $.task_definition,
         )),
         ';',
      ),
      task_type_declaration: $ => seq(     // RM 9.1
         reservedWord('task'),
         reservedWord('type'),
         $.identifier,
         optional($.known_discriminant_part),
         optional($.aspect_specification),
         optional(seq(
            reservedWord('is'),
            optional(seq(
               reservedWord('new'),
               $._interface_list,
               reservedWord('with'),
            )),
            $.task_definition,
         )),
         ';',
      ),
      non_empty_entry_body_formal_part: $ => seq(
         optional(seq(
            '(',
            $.entry_index_specification,
            ')',
         )),
         field('parameter_profile', $.formal_part),
      ),
      entry_declaration: $ => seq(
         optional($.overriding_indicator),
         reservedWord('entry'),
         $.identifier,
         optional(seq(
            '(',
            $._discrete_subtype_definition,
            ')',
         )),
         field('parameter_profile', optional($.formal_part)),
         optional($.aspect_specification),
         ';',
      ),
      _task_item: $ => choice(
         $.entry_declaration,
         $._aspect_clause,
         $.pragma_g,
      ),
      task_definition: $ => seq(   //  RM 9.1
         repeat($._task_item),
         optional(seq(
            reservedWord('private'),
            repeat($._task_item),
         )),
         reservedWord('end'),
         field('endname', optional($.identifier)),
      ),
      overriding_indicator: $ => seq(
         optional(reservedWord('not')),
         reservedWord('overriding'),
      ),
      _parameter_and_result_profile: $ => seq(
         optional($.formal_part),
         $.result_profile,
      ),
      parameter_specification: $ => seq(     // ARM 6.1
         $._defining_identifier_list,
         ':',
         choice(
            seq(
               optional(reservedWord('aliased')),
               optional($.non_empty_mode),
               optional($.null_exclusion),
               field('subtype_mark', $._name),
            ),
            $.access_definition,
         ),
         optional($._assign_value),
         optional($.aspect_specification),
      ),
      _parameter_specification_list: $ => list_of(
         ';',
         $.parameter_specification,
      ),
      pragma_g: $ => seq(    // RM 2.8
         reservedWord('pragma'),
         $.identifier,
         optional(seq(
            '(',
            choice(
               comma_separated_list_of($.pragma_argument_association),
               $._conditional_quantified_expression,
            ),
            ')',
         )),
         ';'
      ),
      pragma_argument_association: $ => seq(
         optional(seq(
            $._aspect_mark,
            '=>',
         )),
         $.expression,
      ),
      if_expression: $ => seq(
         reservedWord('if'),
         field('condition', $.expression),
         reservedWord('then'),
         $.expression,
         repeat($.elsif_expression_item),
         optional(seq(
            reservedWord('else'),
            $.expression,
         )),
      ),
      elsif_expression_item: $ => seq(
         reservedWord('elsif'),
         field('condition', $.expression),
         reservedWord('then'),
         $.expression,
      ),
      procedure_specification: $ => seq(
         reservedWord('procedure'),
         field('name', $._name),
         optional($.formal_part),
      ),
      record_representation_clause: $ => prec.left(seq(    // ARM 13.5.1
         reservedWord('for'),
         field('local_name', $._name),
         reservedWord('use'),
         reservedWord('record'),
         optional($.mod_clause),
         repeat($.component_clause),
         reservedWord('end'),
         reservedWord('record'),
         optional(field('end_local_name', $._name)),
         ';',
      )),
      _renaming_declaration: $ => choice(
         $.object_renaming_declaration,
         $.exception_renaming_declaration,
         $.package_renaming_declaration,
         $.subprogram_renaming_declaration,
         $.generic_renaming_declaration,
      ),
      object_renaming_declaration: $ => choice(    // ARM 8.5.1
         seq(
            $.identifier,
            optional(seq(
               ':',
               optional($.null_exclusion),
               field('subtype_mark', $._name),
            )),
            reservedWord('renames'),
            field('object_name', $._name),
            optional($.aspect_specification),
            ';',
         ),
         seq(
            $.identifier,
            ':',
            $.access_definition,
            reservedWord('renames'),
            field('object_name', $._name),
            optional($.aspect_specification),
            ';',
         ),
      ),
      exception_renaming_declaration: $ => seq(    // ARM 8.5.2
         $.identifier,
         ':',
         reservedWord('exception'),
         reservedWord('renames'),
         field('exception_name', $._name),
         optional($.aspect_specification),
         ';',
      ),
      package_renaming_declaration: $ => seq(
         reservedWord('package'),
         field('name', $._name),
         reservedWord('renames'),
         field('package_name', $._name),
         optional($.aspect_specification),
         ';',
      ),
      subprogram_renaming_declaration: $ => seq(
         optional($.overriding_indicator),
         $._subprogram_specification,
         reservedWord('renames'),
         field('callable_entity_name', $._name),
         optional($.aspect_specification),
         ';',
      ),
      generic_renaming_declaration: $ => choice(
         seq(
            reservedWord('generic'),
            reservedWord('package'),
            field('defining_program_unit_name', $._name),
            reservedWord('renames'),
            field('generic_package_name', $._name),
            optional($.aspect_specification),
            ';',
         ),
         seq(
            reservedWord('generic'),
            reservedWord('procedure'),
            field('defining_program_unit_name', $._name),
            reservedWord('renames'),
            field('generic_procedure_name', $._name),
            optional($.aspect_specification),
            ';',
         ),
         seq(
            reservedWord('generic'),
            reservedWord('function'),
            field('defining_program_unit_name', $._name),
            reservedWord('renames'),
            field('generic_function_name', $._name),
            optional($.aspect_specification),
            ';',
         ),
      ),
      result_profile: $ => seq(
         reservedWord('return'),
         choice(
            seq(
               optional($.null_exclusion),
               field('subtype_mark', $._name),
            ),
            $.access_definition,
         ),
      ),
      _sequence_of_statements: $ => prec.left(seq(
         repeat1($._statement),
         repeat($.label),
      )),
      _simple_statement: $ => choice(
         $.null_statement,
         $.assignment_statement,
         $.exit_statement,
         $.goto_statement,
         $.procedure_call_statement,
         $.simple_return_statement,
         $.requeue_statement,
         $._delay_statement,
         $.abort_statement,
         $.raise_statement,
         $.pragma_g,
      ),
      _statement: $ => seq(
         repeat($.label),
         choice(
            $._simple_statement,
            $._compound_statement,
         ),
      ),
      _compound_statement: $ => choice(
         $.if_statement,
         $.gnatprep_if_statement,
         $.case_statement,
         $.loop_statement,
         $.block_statement,
         $.extended_return_statement,
//         $.parallel_block_statement,
         $.accept_statement,
         $._select_statement,
      ),
      _select_statement: $ => choice(
         $.selective_accept,
         $.timed_entry_call,
         $.conditional_entry_call,
         $.asynchronous_select,
      ),
      entry_call_alternative: $ => seq(
         $.procedure_call_statement,
         optional($._sequence_of_statements),
      ),
      asynchronous_select: $ => seq(
         reservedWord('select'),
         $.triggering_alternative,
         reservedWord('then'),
         reservedWord('abort'),
         field('abortable_part', $._sequence_of_statements),
         reservedWord('end'),
         reservedWord('select'),
         ';',
      ),
      triggering_alternative: $ => choice(
         seq(
            $.procedure_call_statement,
            optional($._sequence_of_statements),
         ),
         seq(
            $._delay_statement,
            optional($._sequence_of_statements),
         ),
      ),
      conditional_entry_call: $ => seq(
         reservedWord('select'),
         $.entry_call_alternative,
         reservedWord('else'),
         $._sequence_of_statements,
         reservedWord('end'),
         reservedWord('select'),
         ';',
      ),
      delay_alternative: $ => seq(
         $._delay_statement,
         optional($._sequence_of_statements)
      ),
      timed_entry_call: $ => seq(
         reservedWord('select'),
         $.entry_call_alternative,
         reservedWord('or'),
         $.delay_alternative,
         reservedWord('end'),
         reservedWord('select'),
         ';',
      ),
      guard: $ => seq(
         reservedWord('when'),
         field('condition', $.expression),
         '=>',
      ),
      select_alternative: $ => choice(    // ARM 9.7.1
         $.accept_alternative,
         $.delay_alternative,
         $.terminate_alternative,
      ),
      accept_alternative: $ => seq(  // ARM 9.7.1
         $.accept_statement,
         optional($._sequence_of_statements),
      ),
      delay_alternative: $ => seq(   // ARM 9.7.1
         $._delay_statement,
         optional($._sequence_of_statements),
      ),
      terminate_alternative: $ => seq(  // ARM 9.7.1
         reservedWord("terminate"),
         ';',
      ),
      selective_accept: $ => seq(    // ARM 9.7.1
         reservedWord('select'),
         list_of(reservedWord('or'), seq(
            optional($.guard),
            $.select_alternative,
         )),
         optional(seq(
            reservedWord('else'),
            $._sequence_of_statements,
         )),
         reservedWord('end'),
         reservedWord('select'),
         ';',
      ),
      abort_statement: $ => seq(
         reservedWord('abort'),
         comma_separated_list_of($._name),
         ';',
      ),
      requeue_statement: $ => seq(   // ARM 9.5.4
         reservedWord('requeue'),
         field('name', $._name),
         optional(seq(
            reservedWord('with'),
            reservedWord('abort'),
         )),
         ';',
      ),
      accept_statement: $ => seq(   //  ARM 9.5.2
         reservedWord('accept'),
         field('entry_direct_name', $.identifier),
         optional(seq(
            '(',
            field('entry_index', $.expression),
            ')',
         )),
         optional(field('parameter_profile', $.formal_part)),
         optional(seq(
            reservedWord('do'),
            $.handled_sequence_of_statements,
            reservedWord('end'),
            optional(field('entry_identifier', $.identifier)),
         )),
         ';',
      ),
      case_statement_alternative: $ => seq(
         reservedWord('when'),
         $.discrete_choice_list,
         '=>',
         $._sequence_of_statements,
      ),
      case_statement: $ => seq(
         reservedWord('case'),
         $.expression,
         reservedWord('is'),
         repeat1($.case_statement_alternative),
         reservedWord('end'),
         reservedWord('case'),
         ';',
      ),
      block_statement: $ => seq(
         optional($.loop_label),
         optional(seq(
            reservedWord('declare'),
            optional($.non_empty_declarative_part),
         )),
         reservedWord('begin'),
         $.handled_sequence_of_statements,
         reservedWord('end'),
         optional($.identifier),
         ';',
      ),
      if_statement: $ => seq(
         reservedWord('if'),
         field('condition', $.expression),
         reservedWord('then'),
         field('statements', $._sequence_of_statements),
         repeat($.elsif_statement_item),
         optional(seq(
            reservedWord('else'),
            field('else_statements', $._sequence_of_statements),
         )),
         reservedWord('end'),
         reservedWord('if'),
         ';',
      ),
      elsif_statement_item: $ => seq(
         reservedWord('elsif'),
         field('condition', $.expression),
         reservedWord('then'),
         field('statements', $._sequence_of_statements),
      ),
      gnatprep_declarative_if_statement: $ => seq(
         reservedWord('#if'),
         field('condition', $.expression),
         reservedWord('then'),
         repeat($._declarative_item_pragma),
         repeat(seq(
            reservedWord('#elsif'),
            field('condition', $.expression),
            reservedWord('then'),
            repeat($._declarative_item_pragma),
         )),
         optional(seq(
            reservedWord('#else'),
            repeat($._declarative_item_pragma),
         )),
         reservedWord('#end'),
         reservedWord('if'),
         ';',
      ),
      gnatprep_if_statement: $ => seq(
         reservedWord('#if'),
         field('condition', $.expression),
         reservedWord('then'),
         repeat($._statement),  // can be empty
         repeat(seq(
            reservedWord('#elsif'),
            field('condition', $.expression),
            reservedWord('then'),
            repeat($._statement),  // can be empty
         )),
         optional(seq(
            reservedWord('#else'),
            repeat($._statement),  // can be empty
         )),
         reservedWord('#end'),
         reservedWord('if'),
         ';',
      ),
      exit_statement: $ => seq(     // ARM 5.7
         reservedWord('exit'),
         field('loop_name', optional($._name)),
         optional(seq(
            reservedWord('when'),
            field('condition', $.expression),
         )),
         ';',
      ),
      goto_statement: $ => seq(
         reservedWord('goto'),
         field('label_name', $._name),
         ';',
      ),
      _delay_statement: $ => choice(
         $.delay_until_statement,
         $.delay_relative_statement,
      ),
      delay_until_statement: $ => seq(
         reservedWord('delay'),
         reservedWord('until'),
         $.expression,
         ';',
      ),
      delay_relative_statement: $ => seq(
         reservedWord('delay'),
         $.expression,
         ';',
      ),
      simple_return_statement: $ => seq(
         reservedWord('return'),
         optional($.expression),
         ';',
      ),
      extended_return_statement: $ => seq(
         reservedWord('return'),
         $.extended_return_object_declaration,
         optional(seq(
            reservedWord('do'),
            $.handled_sequence_of_statements,
            reservedWord('end'),
            reservedWord('return'),
         )),
         ';',
      ),
      extended_return_object_declaration: $ => seq(
         $.identifier,
         ':',
         optional(reservedWord('aliased')),
         optional(reservedWord('constant')),
         $._return_subtype_indication,
         optional($._assign_value),
      ),
      _return_subtype_indication: $ => choice(
         $._subtype_indication,
         $.access_definition,
      ),
      procedure_call_statement: $ => choice(    // ARM 6.4
         seq(
            field('name', $._name_not_function_call),
            ';',
         ),
         seq(
            field('name', $._name),   // includes function_call
            $.actual_parameter_part,
            ';',
         ),
      ),
      function_call: $ => seq(             // ARM 6.4
         field('name', $._name),   // itself includes a function_call
         $.actual_parameter_part,  // should be optional, but covered by _name
      ),
      raise_statement: $ => seq(
         reservedWord('raise'),
         optional(seq(
            field('name', $._name),
            optional(seq(
               reservedWord('with'),
               $.expression,  // ada-mode allows "raise CE with raise with ..."
            )),
         )),
         ';',
      ),
      loop_statement: $ => seq(
         optional($.loop_label),
         optional($.iteration_scheme),
         reservedWord('loop'),
         field('statements', $._sequence_of_statements),
         reservedWord('end'),
         reservedWord('loop'),
         optional($.identifier),
         ';',
      ),
      iteration_scheme: $ => choice(
         seq(
            reservedWord('while'),
            field('condition', $.expression),
         ),
         seq(
            reservedWord('for'),
            choice(
               $.loop_parameter_specification,
               $.iterator_specification,
            ),
         ),
//         seq(
//            optional(reservedWord('parallel')),
//            reservedWord('for'),
//            $.procedural_iterator,
//         ),
//         seq(
//            reservedWord('parallel'),
//            optional(seq(
//               '(',
//               $.chunk_specification,
//               ')',
//            )),
//            reservedWord('for'),
//            choice(
//               $.loop_parameter_specification,
//               $.iterator_specification,
//            ),
//         ),
      ),
      assignment_statement: $ => seq(    // ARM 5.2
         field('variable_name', $._name),
         $._assign_value,
         ';',
      ),
      subprogram_declaration: $ => seq(
         optional($.overriding_indicator),
         $._subprogram_specification,
         field('is_abstract', optional(seq(
            reservedWord('is'),
            reservedWord('abstract'),
         ))),
         optional($.aspect_specification),
         ';',
      ),
      expression_function_declaration: $ => seq(           // RM 6.8
         optional($.overriding_indicator),
         $.function_specification,
         reservedWord('is'),
         choice(
            $._aggregate,                                   // Ada 20x

            // In the RM grammar, this is a simple '(expression)', but
            // conditional expression would require a second nested pair of
            // parenthesis, whereas this is not mandatory anymore in the
            // text of the RM.
            $._parenthesized_expression,
         ),
         optional($.aspect_specification),
         ';',
      ),
      _subprogram_specification: $ => choice(
         $.procedure_specification,
         $.function_specification,
      ),
      subtype_declaration: $ => seq(
         reservedWord('subtype'),
         $.identifier,
         reservedWord('is'),
         $._subtype_indication,
         optional($.aspect_specification),
         ';',
      ),
      variant_part: $ => seq(
         reservedWord('case'),
         $.identifier,
         reservedWord('is'),
         $.variant_list,
         reservedWord('end'),
         reservedWord('case'),
         ';',
      ),
      variant_list: $ => repeat1($.variant),
      variant: $ => seq(
         reservedWord('when'),
         $.discrete_choice_list,
         '=>',
         $.component_list,
      ),
   }
});
