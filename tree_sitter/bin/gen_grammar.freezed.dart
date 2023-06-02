// coverage:ignore-file
// GENERATED CODE - DO NOT MODIFY BY HAND
// ignore_for_file: type=lint
// ignore_for_file: unused_element, deprecated_member_use, deprecated_member_use_from_same_package, use_function_type_syntax_for_parameters, unnecessary_const, avoid_init_to_null, invalid_override_different_default_values_named, prefer_expression_function_bodies, annotate_overrides, invalid_annotation_target, unnecessary_question_mark

part of 'gen_grammar.dart';

// **************************************************************************
// FreezedGenerator
// **************************************************************************

T _$identity<T>(T value) => value;

final _privateConstructorUsedError = UnsupportedError(
    'It seems like you constructed your class using `MyClass._()`. This constructor is only meant to be used by freezed and you are not supposed to need it nor use it.\nPlease check the documentation here for more information: https://github.com/rrousselGit/freezed#custom-getters-and-methods');

Type _$TypeFromJson(Map<String, dynamic> json) {
  return _Type.fromJson(json);
}

/// @nodoc
mixin _$Type {
  String get type => throw _privateConstructorUsedError;
  bool get named => throw _privateConstructorUsedError;
  Map<String, Field> get fields => throw _privateConstructorUsedError;
  Field? get children => throw _privateConstructorUsedError;
  List<Type> get subtypes => throw _privateConstructorUsedError;

  Map<String, dynamic> toJson() => throw _privateConstructorUsedError;
  @JsonKey(ignore: true)
  $TypeCopyWith<Type> get copyWith => throw _privateConstructorUsedError;
}

/// @nodoc
abstract class $TypeCopyWith<$Res> {
  factory $TypeCopyWith(Type value, $Res Function(Type) then) =
      _$TypeCopyWithImpl<$Res, Type>;
  @useResult
  $Res call(
      {String type,
      bool named,
      Map<String, Field> fields,
      Field? children,
      List<Type> subtypes});

  $FieldCopyWith<$Res>? get children;
}

/// @nodoc
class _$TypeCopyWithImpl<$Res, $Val extends Type>
    implements $TypeCopyWith<$Res> {
  _$TypeCopyWithImpl(this._value, this._then);

  // ignore: unused_field
  final $Val _value;
  // ignore: unused_field
  final $Res Function($Val) _then;

  @pragma('vm:prefer-inline')
  @override
  $Res call({
    Object? type = null,
    Object? named = null,
    Object? fields = null,
    Object? children = freezed,
    Object? subtypes = null,
  }) {
    return _then(_value.copyWith(
      type: null == type
          ? _value.type
          : type // ignore: cast_nullable_to_non_nullable
              as String,
      named: null == named
          ? _value.named
          : named // ignore: cast_nullable_to_non_nullable
              as bool,
      fields: null == fields
          ? _value.fields
          : fields // ignore: cast_nullable_to_non_nullable
              as Map<String, Field>,
      children: freezed == children
          ? _value.children
          : children // ignore: cast_nullable_to_non_nullable
              as Field?,
      subtypes: null == subtypes
          ? _value.subtypes
          : subtypes // ignore: cast_nullable_to_non_nullable
              as List<Type>,
    ) as $Val);
  }

  @override
  @pragma('vm:prefer-inline')
  $FieldCopyWith<$Res>? get children {
    if (_value.children == null) {
      return null;
    }

    return $FieldCopyWith<$Res>(_value.children!, (value) {
      return _then(_value.copyWith(children: value) as $Val);
    });
  }
}

/// @nodoc
abstract class _$$_TypeCopyWith<$Res> implements $TypeCopyWith<$Res> {
  factory _$$_TypeCopyWith(_$_Type value, $Res Function(_$_Type) then) =
      __$$_TypeCopyWithImpl<$Res>;
  @override
  @useResult
  $Res call(
      {String type,
      bool named,
      Map<String, Field> fields,
      Field? children,
      List<Type> subtypes});

  @override
  $FieldCopyWith<$Res>? get children;
}

/// @nodoc
class __$$_TypeCopyWithImpl<$Res> extends _$TypeCopyWithImpl<$Res, _$_Type>
    implements _$$_TypeCopyWith<$Res> {
  __$$_TypeCopyWithImpl(_$_Type _value, $Res Function(_$_Type) _then)
      : super(_value, _then);

  @pragma('vm:prefer-inline')
  @override
  $Res call({
    Object? type = null,
    Object? named = null,
    Object? fields = null,
    Object? children = freezed,
    Object? subtypes = null,
  }) {
    return _then(_$_Type(
      type: null == type
          ? _value.type
          : type // ignore: cast_nullable_to_non_nullable
              as String,
      named: null == named
          ? _value.named
          : named // ignore: cast_nullable_to_non_nullable
              as bool,
      fields: null == fields
          ? _value._fields
          : fields // ignore: cast_nullable_to_non_nullable
              as Map<String, Field>,
      children: freezed == children
          ? _value.children
          : children // ignore: cast_nullable_to_non_nullable
              as Field?,
      subtypes: null == subtypes
          ? _value._subtypes
          : subtypes // ignore: cast_nullable_to_non_nullable
              as List<Type>,
    ));
  }
}

/// @nodoc
@JsonSerializable()
class _$_Type implements _Type {
  const _$_Type(
      {required this.type,
      required this.named,
      final Map<String, Field> fields = const {},
      this.children,
      final List<Type> subtypes = const []})
      : _fields = fields,
        _subtypes = subtypes;

  factory _$_Type.fromJson(Map<String, dynamic> json) => _$$_TypeFromJson(json);

  @override
  final String type;
  @override
  final bool named;
  final Map<String, Field> _fields;
  @override
  @JsonKey()
  Map<String, Field> get fields {
    if (_fields is EqualUnmodifiableMapView) return _fields;
    // ignore: implicit_dynamic_type
    return EqualUnmodifiableMapView(_fields);
  }

  @override
  final Field? children;
  final List<Type> _subtypes;
  @override
  @JsonKey()
  List<Type> get subtypes {
    if (_subtypes is EqualUnmodifiableListView) return _subtypes;
    // ignore: implicit_dynamic_type
    return EqualUnmodifiableListView(_subtypes);
  }

  @override
  String toString() {
    return 'Type(type: $type, named: $named, fields: $fields, children: $children, subtypes: $subtypes)';
  }

  @override
  bool operator ==(dynamic other) {
    return identical(this, other) ||
        (other.runtimeType == runtimeType &&
            other is _$_Type &&
            (identical(other.type, type) || other.type == type) &&
            (identical(other.named, named) || other.named == named) &&
            const DeepCollectionEquality().equals(other._fields, _fields) &&
            (identical(other.children, children) ||
                other.children == children) &&
            const DeepCollectionEquality().equals(other._subtypes, _subtypes));
  }

  @JsonKey(ignore: true)
  @override
  int get hashCode => Object.hash(
      runtimeType,
      type,
      named,
      const DeepCollectionEquality().hash(_fields),
      children,
      const DeepCollectionEquality().hash(_subtypes));

  @JsonKey(ignore: true)
  @override
  @pragma('vm:prefer-inline')
  _$$_TypeCopyWith<_$_Type> get copyWith =>
      __$$_TypeCopyWithImpl<_$_Type>(this, _$identity);

  @override
  Map<String, dynamic> toJson() {
    return _$$_TypeToJson(
      this,
    );
  }
}

abstract class _Type implements Type {
  const factory _Type(
      {required final String type,
      required final bool named,
      final Map<String, Field> fields,
      final Field? children,
      final List<Type> subtypes}) = _$_Type;

  factory _Type.fromJson(Map<String, dynamic> json) = _$_Type.fromJson;

  @override
  String get type;
  @override
  bool get named;
  @override
  Map<String, Field> get fields;
  @override
  Field? get children;
  @override
  List<Type> get subtypes;
  @override
  @JsonKey(ignore: true)
  _$$_TypeCopyWith<_$_Type> get copyWith => throw _privateConstructorUsedError;
}

Field _$FieldFromJson(Map<String, dynamic> json) {
  return _Field.fromJson(json);
}

/// @nodoc
mixin _$Field {
  bool get multiple => throw _privateConstructorUsedError;
  bool get required => throw _privateConstructorUsedError;
  List<Type> get types => throw _privateConstructorUsedError;

  Map<String, dynamic> toJson() => throw _privateConstructorUsedError;
  @JsonKey(ignore: true)
  $FieldCopyWith<Field> get copyWith => throw _privateConstructorUsedError;
}

/// @nodoc
abstract class $FieldCopyWith<$Res> {
  factory $FieldCopyWith(Field value, $Res Function(Field) then) =
      _$FieldCopyWithImpl<$Res, Field>;
  @useResult
  $Res call({bool multiple, bool required, List<Type> types});
}

/// @nodoc
class _$FieldCopyWithImpl<$Res, $Val extends Field>
    implements $FieldCopyWith<$Res> {
  _$FieldCopyWithImpl(this._value, this._then);

  // ignore: unused_field
  final $Val _value;
  // ignore: unused_field
  final $Res Function($Val) _then;

  @pragma('vm:prefer-inline')
  @override
  $Res call({
    Object? multiple = null,
    Object? required = null,
    Object? types = null,
  }) {
    return _then(_value.copyWith(
      multiple: null == multiple
          ? _value.multiple
          : multiple // ignore: cast_nullable_to_non_nullable
              as bool,
      required: null == required
          ? _value.required
          : required // ignore: cast_nullable_to_non_nullable
              as bool,
      types: null == types
          ? _value.types
          : types // ignore: cast_nullable_to_non_nullable
              as List<Type>,
    ) as $Val);
  }
}

/// @nodoc
abstract class _$$_FieldCopyWith<$Res> implements $FieldCopyWith<$Res> {
  factory _$$_FieldCopyWith(_$_Field value, $Res Function(_$_Field) then) =
      __$$_FieldCopyWithImpl<$Res>;
  @override
  @useResult
  $Res call({bool multiple, bool required, List<Type> types});
}

/// @nodoc
class __$$_FieldCopyWithImpl<$Res> extends _$FieldCopyWithImpl<$Res, _$_Field>
    implements _$$_FieldCopyWith<$Res> {
  __$$_FieldCopyWithImpl(_$_Field _value, $Res Function(_$_Field) _then)
      : super(_value, _then);

  @pragma('vm:prefer-inline')
  @override
  $Res call({
    Object? multiple = null,
    Object? required = null,
    Object? types = null,
  }) {
    return _then(_$_Field(
      multiple: null == multiple
          ? _value.multiple
          : multiple // ignore: cast_nullable_to_non_nullable
              as bool,
      required: null == required
          ? _value.required
          : required // ignore: cast_nullable_to_non_nullable
              as bool,
      types: null == types
          ? _value._types
          : types // ignore: cast_nullable_to_non_nullable
              as List<Type>,
    ));
  }
}

/// @nodoc
@JsonSerializable()
class _$_Field implements _Field {
  const _$_Field(
      {required this.multiple,
      required this.required,
      final List<Type> types = const []})
      : _types = types;

  factory _$_Field.fromJson(Map<String, dynamic> json) =>
      _$$_FieldFromJson(json);

  @override
  final bool multiple;
  @override
  final bool required;
  final List<Type> _types;
  @override
  @JsonKey()
  List<Type> get types {
    if (_types is EqualUnmodifiableListView) return _types;
    // ignore: implicit_dynamic_type
    return EqualUnmodifiableListView(_types);
  }

  @override
  String toString() {
    return 'Field(multiple: $multiple, required: $required, types: $types)';
  }

  @override
  bool operator ==(dynamic other) {
    return identical(this, other) ||
        (other.runtimeType == runtimeType &&
            other is _$_Field &&
            (identical(other.multiple, multiple) ||
                other.multiple == multiple) &&
            (identical(other.required, required) ||
                other.required == required) &&
            const DeepCollectionEquality().equals(other._types, _types));
  }

  @JsonKey(ignore: true)
  @override
  int get hashCode => Object.hash(runtimeType, multiple, required,
      const DeepCollectionEquality().hash(_types));

  @JsonKey(ignore: true)
  @override
  @pragma('vm:prefer-inline')
  _$$_FieldCopyWith<_$_Field> get copyWith =>
      __$$_FieldCopyWithImpl<_$_Field>(this, _$identity);

  @override
  Map<String, dynamic> toJson() {
    return _$$_FieldToJson(
      this,
    );
  }
}

abstract class _Field implements Field {
  const factory _Field(
      {required final bool multiple,
      required final bool required,
      final List<Type> types}) = _$_Field;

  factory _Field.fromJson(Map<String, dynamic> json) = _$_Field.fromJson;

  @override
  bool get multiple;
  @override
  bool get required;
  @override
  List<Type> get types;
  @override
  @JsonKey(ignore: true)
  _$$_FieldCopyWith<_$_Field> get copyWith =>
      throw _privateConstructorUsedError;
}
