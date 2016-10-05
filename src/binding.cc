#include "tree_sitter/parser.h"
#include <node.h>
#include "nan.h"

using namespace v8;

extern "C" TSLanguage * ts_language_c();

namespace tree_sitter_c {

NAN_METHOD(New) {}

void Init(Handle<Object> exports, Handle<Object> module) {
  Local<FunctionTemplate> tpl = Nan::New<FunctionTemplate>(New);
  tpl->SetClassName(Nan::New("Language").ToLocalChecked());
  tpl->InstanceTemplate()->SetInternalFieldCount(1);

  Local<Function> constructor = tpl->GetFunction();
  Local<Object> instance = constructor->NewInstance(0, NULL);
  Nan::SetInternalFieldPointer(instance, 0, ts_language_c());

  instance->Set(Nan::New("name").ToLocalChecked(), Nan::New("c").ToLocalChecked());
  module->Set(Nan::New("exports").ToLocalChecked(), instance);
}

NODE_MODULE(ts_language_c_binding, Init)

}  // namespace tree_sitter_c
