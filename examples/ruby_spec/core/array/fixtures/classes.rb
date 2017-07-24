class Object
  # This helper is defined here rather than in MSpec because
  # it is only used in #pack specs.
  def pack_format(count=nil, repeat=nil)
    format = "#{instance_variable_get(:@method)}#{count}"
    format *= repeat if repeat
    format
  end
end

module ArraySpecs
  SampleRange = 0..1000
  SampleCount = 1000

  def self.frozen_array
    frozen_array = [1,2,3]
    frozen_array.freeze
    frozen_array
  end

  def self.empty_frozen_array
    frozen_array = []
    frozen_array.freeze
    frozen_array
  end

  def self.recursive_array
    a = [1, 'two', 3.0]
    5.times { a << a }
    a
  end

  def self.head_recursive_array
    a =  []
    5.times { a << a }
    a << 1 << 'two' << 3.0
    a
  end

  def self.empty_recursive_array
    a = []
    a << a
    a
  end

  class MyArray < Array
    # The #initialize method has a different signature than Array to help
    # catch places in the specs that do not assert the #initialize is not
    # called when Array methods make new instances.
    def initialize(a, b)
      self << a << b
      ScratchPad.record :my_array_initialize
    end
  end

  class Sexp < Array
    def initialize(*args)
      super(args)
    end
  end

  # TODO: replace specs that use this with #should_not_receive(:to_ary)
  # expectations on regular objects (e.g. Array instances).
  class ToAryArray < Array
    def to_ary() ["to_ary", "was", "called!"] end
  end

  class MyRange < Range; end

  class AssocKey
    def ==(other); other == 'it'; end
  end

  class D
    def <=>(obj)
      return 4 <=> obj unless obj.class == D
      0
    end
  end

  class SubArray < Array
    def initialize(*args)
      ScratchPad.record args
    end
  end

  class ArrayConvertable
    attr_accessor :called
    def initialize(*values, &block)
      @values = values;
    end

    def to_a
      self.called = :to_a
      @values
    end

    def to_ary
      self.called = :to_ary
      @values
    end
  end

  class SortSame
    def <=>(other); 0; end
    def ==(other); true; end
  end

  class UFOSceptic
    def <=>(other); raise "N-uh, UFO:s do not exist!"; end
  end

  class MockForCompared
    @@count = 0
    @@compared = false
    def initialize
      @@compared = false
      @order = (@@count += 1)
    end
    def <=>(rhs)
      @@compared = true
      return rhs.order <=> self.order
    end
    def self.compared?
      @@compared
    end

    protected
    attr_accessor :order
  end

  class ComparableWithFixnum
    include Comparable
    def initialize(num)
      @num = num
    end

    def <=>(fixnum)
      @num <=> fixnum
    end
  end

  class Uncomparable
    def <=>(obj)
      nil
    end
  end

  def self.universal_pack_object
    obj = mock("string float int")
    obj.stub!(:to_int).and_return(1)
    obj.stub!(:to_str).and_return("1")
    obj.stub!(:to_f).and_return(1.0)
    obj
  end

  LargeArray = ["test_create_table_with_force_true_does_not_drop_nonexisting_table",
 "test_add_table",
 "assert_difference",
 "assert_operator",
 "instance_variables",
 "class",
 "instance_variable_get",
 "__class__",
 "expects",
 "assert_no_difference",
 "name",
 "assert_blank",
 "assert_not_same",
 "is_a?",
 "test_add_table_with_decimals",
 "test_create_table_with_timestamps_should_create_datetime_columns",
 "assert_present",
 "assert_no_match",
 "__instance_of__",
 "assert_deprecated",
 "assert",
 "assert_throws",
 "kind_of?",
 "try",
 "__instance_variable_get__",
 "object_id",
 "timeout",
 "instance_variable_set",
 "assert_nothing_thrown",
 "__instance_variable_set__",
 "copy_object",
 "test_create_table_with_timestamps_should_create_datetime_columns_with_options",
 "assert_not_deprecated",
 "assert_in_delta",
 "id",
 "copy_metaclass",
 "test_create_table_without_a_block",
 "dup",
 "assert_not_nil",
 "send",
 "__instance_variables__",
 "to_sql",
 "mock",
 "assert_send",
 "instance_variable_defined?",
 "clone",
 "require",
 "test_migrator",
 "__instance_variable_defined_eh__",
 "frozen?",
 "test_add_column_not_null_with_default",
 "freeze",
 "test_migrator_one_up",
 "test_migrator_one_down",
 "singleton_methods",
 "method_exists?",
 "create_fixtures",
 "test_migrator_one_up_one_down",
 "test_native_decimal_insert_manual_vs_automatic",
 "instance_exec",
 "__is_a__",
 "test_migrator_double_up",
 "stub",
 "private_methods",
 "stubs",
 "test_migrator_double_down",
 "fixture_path",
 "private_singleton_methods",
 "stub_everything",
 "test_migrator_one_up_with_exception_and_rollback",
 "sequence",
 "protected_methods",
 "enum_for",
 "test_finds_migrations",
 "run_before_mocha",
 "states",
 "protected_singleton_methods",
 "to_json",
 "instance_values",
 "==",
 "mocha_setup",
 "public_methods",
 "test_finds_pending_migrations",
 "mocha_verify",
 "assert_kind_of",
 "===",
 "=~",
 "test_relative_migrations",
 "mocha_teardown",
 "gem",
 "mocha",
 "test_only_loads_pending_migrations",
 "test_add_column_with_precision_and_scale",
 "require_or_load",
 "eql?",
 "require_dependency",
 "test_native_types",
 "test_target_version_zero_should_run_only_once",
 "extend",
 "to_matcher",
 "unloadable",
 "require_association",
 "hash",
 "__id__",
 "load_dependency",
 "equals",
 "test_migrator_db_has_no_schema_migrations_table",
 "test_migrator_verbosity",
 "kind_of",
 "to_yaml",
 "to_bool",
 "test_migrator_verbosity_off",
 "taint",
 "test_migrator_going_down_due_to_version_target",
 "tainted?",
 "mocha_inspect",
 "test_migrator_rollback",
 "vim",
 "untaint",
 "taguri=",
 "test_migrator_forward",
 "test_schema_migrations_table_name",
 "test_proper_table_name",
 "all_of",
 "test_add_drop_table_with_prefix_and_suffix",
 "_setup_callbacks",
 "setup",
 "Not",
 "test_create_table_with_binary_column",
 "assert_not_equal",
 "enable_warnings",
 "acts_like?",
 "Rational",
 "_removed_setup_callbacks",
 "Table",
 "bind",
 "any_of",
 "__method__",
 "test_migrator_with_duplicates",
 "_teardown_callbacks",
 "method",
 "test_migrator_with_duplicate_names",
 "_removed_teardown_callbacks",
 "any_parameters",
 "test_migrator_with_missing_version_numbers",
 "test_add_remove_single_field_using_string_arguments",
 "test_create_table_with_custom_sequence_name",
 "test_add_remove_single_field_using_symbol_arguments",
 "_one_time_conditions_valid_14?",
 "_one_time_conditions_valid_16?",
 "run_callbacks",
 "anything",
 "silence_warnings",
 "instance_variable_names",
 "_fixture_path",
 "copy_instance_variables_from",
 "fixture_path?",
 "has_entry",
 "__marshal__",
 "_fixture_table_names",
 "__kind_of__",
 "fixture_table_names?",
 "test_add_rename",
 "assert_equal",
 "_fixture_class_names",
 "fixture_class_names?",
 "has_entries",
 "_use_transactional_fixtures",
 "people",
 "test_rename_column_using_symbol_arguments",
 "use_transactional_fixtures?",
 "instance_eval",
 "blank?",
 "with_warnings",
 "__nil__",
 "load",
 "metaclass",
 "_use_instantiated_fixtures",
 "has_key",
 "class_eval",
 "present?",
 "test_rename_column",
 "teardown",
 "use_instantiated_fixtures?",
 "method_name",
 "silence_stderr",
 "presence",
 "test_rename_column_preserves_default_value_not_null",
 "silence_stream",
 "_pre_loaded_fixtures",
 "__metaclass__",
 "__fixnum__",
 "pre_loaded_fixtures?",
 "has_value",
 "suppress",
 "to_yaml_properties",
 "test_rename_nonexistent_column",
 "test_add_index",
 "includes",
 "find_correlate_in",
 "equality_predicate_sql",
 "assert_nothing_raised",
 "let",
 "not_predicate_sql",
 "test_rename_column_with_sql_reserved_word",
 "singleton_class",
 "test_rename_column_with_an_index",
 "display",
 "taguri",
 "to_yaml_style",
 "test_remove_column_with_index",
 "size",
 "current_adapter?",
 "test_remove_column_with_multi_column_index",
 "respond_to?",
 "test_change_type_of_not_null_column",
 "is_a",
 "to_a",
 "test_rename_table_for_sqlite_should_work_with_reserved_words",
 "require_library_or_gem",
 "setup_fixtures",
 "equal?",
 "teardown_fixtures",
 "nil?",
 "fixture_table_names",
 "fixture_class_names",
 "test_create_table_without_id",
 "use_transactional_fixtures",
 "test_add_column_with_primary_key_attribute",
 "repair_validations",
 "use_instantiated_fixtures",
 "instance_of?",
 "test_create_table_adds_id",
 "test_rename_table",
 "pre_loaded_fixtures",
 "to_enum",
 "test_create_table_with_not_null_column",
 "instance_of",
 "test_change_column_nullability",
 "optionally",
 "test_rename_table_with_an_index",
 "run",
 "test_change_column",
 "default_test",
 "assert_raise",
 "test_create_table_with_defaults",
 "assert_nil",
 "flunk",
 "regexp_matches",
 "duplicable?",
 "reset_mocha",
 "stubba_method",
 "filter_backtrace",
 "test_create_table_with_limits",
 "responds_with",
 "stubba_object",
 "test_change_column_with_nil_default",
 "assert_block",
 "__show__",
 "assert_date_from_db",
 "__respond_to_eh__",
 "run_in_transaction?",
 "inspect",
 "assert_sql",
 "test_change_column_with_new_default",
 "yaml_equivalent",
 "build_message",
 "to_s",
 "test_change_column_default",
 "assert_queries",
 "pending",
 "as_json",
 "assert_no_queries",
 "test_change_column_quotes_column_names",
 "assert_match",
 "test_keeping_default_and_notnull_constaint_on_change",
 "methods",
 "connection_allow_concurrency_setup",
 "connection_allow_concurrency_teardown",
 "test_create_table_with_primary_key_prefix_as_table_name_with_underscore",
 "__send__",
 "make_connection",
 "assert_raises",
 "tap",
 "with_kcode",
 "assert_instance_of",
 "test_create_table_with_primary_key_prefix_as_table_name",
 "assert_respond_to",
 "test_change_column_default_to_null",
 "assert_same",
 "__extend__"]

  LargeTestArraySorted = ["test_add_column_not_null_with_default",
 "test_add_column_with_precision_and_scale",
 "test_add_column_with_primary_key_attribute",
 "test_add_drop_table_with_prefix_and_suffix",
 "test_add_index",
 "test_add_remove_single_field_using_string_arguments",
 "test_add_remove_single_field_using_symbol_arguments",
 "test_add_rename",
 "test_add_table",
 "test_add_table_with_decimals",
 "test_change_column",
 "test_change_column_default",
 "test_change_column_default_to_null",
 "test_change_column_nullability",
 "test_change_column_quotes_column_names",
 "test_change_column_with_new_default",
 "test_change_column_with_nil_default",
 "test_change_type_of_not_null_column",
 "test_create_table_adds_id",
 "test_create_table_with_binary_column",
 "test_create_table_with_custom_sequence_name",
 "test_create_table_with_defaults",
 "test_create_table_with_force_true_does_not_drop_nonexisting_table",
 "test_create_table_with_limits",
 "test_create_table_with_not_null_column",
 "test_create_table_with_primary_key_prefix_as_table_name",
 "test_create_table_with_primary_key_prefix_as_table_name_with_underscore",
 "test_create_table_with_timestamps_should_create_datetime_columns",
 "test_create_table_with_timestamps_should_create_datetime_columns_with_options",
 "test_create_table_without_a_block",
 "test_create_table_without_id",
 "test_finds_migrations",
 "test_finds_pending_migrations",
 "test_keeping_default_and_notnull_constaint_on_change",
 "test_migrator",
 "test_migrator_db_has_no_schema_migrations_table",
 "test_migrator_double_down",
 "test_migrator_double_up",
 "test_migrator_forward",
 "test_migrator_going_down_due_to_version_target",
 "test_migrator_one_down",
 "test_migrator_one_up",
 "test_migrator_one_up_one_down",
 "test_migrator_one_up_with_exception_and_rollback",
 "test_migrator_rollback",
 "test_migrator_verbosity",
 "test_migrator_verbosity_off",
 "test_migrator_with_duplicate_names",
 "test_migrator_with_duplicates",
 "test_migrator_with_missing_version_numbers",
 "test_native_decimal_insert_manual_vs_automatic",
 "test_native_types",
 "test_only_loads_pending_migrations",
 "test_proper_table_name",
 "test_relative_migrations",
 "test_remove_column_with_index",
 "test_remove_column_with_multi_column_index",
 "test_rename_column",
 "test_rename_column_preserves_default_value_not_null",
 "test_rename_column_using_symbol_arguments",
 "test_rename_column_with_an_index",
 "test_rename_column_with_sql_reserved_word",
 "test_rename_nonexistent_column",
 "test_rename_table",
 "test_rename_table_for_sqlite_should_work_with_reserved_words",
 "test_rename_table_with_an_index",
 "test_schema_migrations_table_name",
 "test_target_version_zero_should_run_only_once"]

  class PrivateToAry
    private

    def to_ary
      [1, 2, 3]
    end
  end
end
