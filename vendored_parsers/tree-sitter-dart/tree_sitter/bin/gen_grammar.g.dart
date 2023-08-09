// GENERATED CODE - DO NOT MODIFY BY HAND

part of 'gen_grammar.dart';

// **************************************************************************
// JsonSerializableGenerator
// **************************************************************************

_$_Type _$$_TypeFromJson(Map<String, dynamic> json) => _$_Type(
      type: json['type'] as String,
      named: json['named'] as bool,
      fields: (json['fields'] as Map<String, dynamic>?)?.map(
            (k, e) => MapEntry(k, Field.fromJson(e as Map<String, dynamic>)),
          ) ??
          const {},
      children: json['children'] == null
          ? null
          : Field.fromJson(json['children'] as Map<String, dynamic>),
      subtypes: (json['subtypes'] as List<dynamic>?)
              ?.map((e) => Type.fromJson(e as Map<String, dynamic>))
              .toList() ??
          const [],
    );

Map<String, dynamic> _$$_TypeToJson(_$_Type instance) => <String, dynamic>{
      'type': instance.type,
      'named': instance.named,
      'fields': instance.fields,
      'children': instance.children,
      'subtypes': instance.subtypes,
    };

_$_Field _$$_FieldFromJson(Map<String, dynamic> json) => _$_Field(
      multiple: json['multiple'] as bool,
      required: json['required'] as bool,
      types: (json['types'] as List<dynamic>?)
              ?.map((e) => Type.fromJson(e as Map<String, dynamic>))
              .toList() ??
          const [],
    );

Map<String, dynamic> _$$_FieldToJson(_$_Field instance) => <String, dynamic>{
      'multiple': instance.multiple,
      'required': instance.required,
      'types': instance.types,
    };
