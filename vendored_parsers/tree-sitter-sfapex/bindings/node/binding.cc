#include "tree_sitter/parser.h"
#include <node.h>
#include "nan.h"

using namespace v8;

extern "C" TSLanguage * tree_sitter_apex();
extern "C" TSLanguage * tree_sitter_soql();
extern "C" TSLanguage * tree_sitter_sosl();

namespace {

NAN_METHOD(New) {}

void Init(Local<Object> exports, Local<Object> module) {
  // Apex
  Local<FunctionTemplate> apex_tpl = Nan::New<FunctionTemplate>(New);
  apex_tpl->SetClassName(Nan::New("Language").ToLocalChecked());
  apex_tpl->InstanceTemplate()->SetInternalFieldCount(1);

  Local<Function> apex_constructor = Nan::GetFunction(apex_tpl).ToLocalChecked();
  Local<Object> apex_instance = apex_constructor->NewInstance(Nan::GetCurrentContext()).ToLocalChecked();
  Nan::SetInternalFieldPointer(apex_instance, 0, tree_sitter_apex());
  Nan::Set(apex_instance, Nan::New("name").ToLocalChecked(), Nan::New("apex").ToLocalChecked());
  // SOQL
  Local<FunctionTemplate> soql_tpl = Nan::New<FunctionTemplate>(New);
  soql_tpl->SetClassName(Nan::New("Language").ToLocalChecked());
  soql_tpl->InstanceTemplate()->SetInternalFieldCount(1);

  Local<Function> soql_constructor = Nan::GetFunction(soql_tpl).ToLocalChecked();
  Local<Object> soql_instance = soql_constructor->NewInstance(Nan::GetCurrentContext()).ToLocalChecked();
  Nan::SetInternalFieldPointer(soql_instance, 0, tree_sitter_soql());
  Nan::Set(soql_instance, Nan::New("name").ToLocalChecked(), Nan::New("soql").ToLocalChecked());
  // SOSL
  Local<FunctionTemplate> sosl_tpl = Nan::New<FunctionTemplate>(New);
  sosl_tpl->SetClassName(Nan::New("Language").ToLocalChecked());
  sosl_tpl->InstanceTemplate()->SetInternalFieldCount(1);

  Local<Function> sosl_constructor = Nan::GetFunction(sosl_tpl).ToLocalChecked();
  Local<Object> sosl_instance = sosl_constructor->NewInstance(Nan::GetCurrentContext()).ToLocalChecked();
  Nan::SetInternalFieldPointer(sosl_instance, 0, tree_sitter_sosl());
  Nan::Set(sosl_instance, Nan::New("name").ToLocalChecked(), Nan::New("sosl").ToLocalChecked());

  Nan::Set(exports, Nan::New("apex").ToLocalChecked(), apex_instance);
  Nan::Set(exports, Nan::New("soql").ToLocalChecked(), soql_instance);
  Nan::Set(exports, Nan::New("sosl").ToLocalChecked(), sosl_instance);
}

NODE_MODULE(tree_sitter_sfapex_binding, Init)

}  // namespace
