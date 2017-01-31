#include "tree_sitter/parser.h"
#include <node.h>
#include "nan.h"

using namespace v8;

extern "C" TSLanguage * tree_sitter_c();

namespace {

NAN_METHOD(New) {}

void Init(Handle<Object> exports, Handle<Object> module) {
  Local<FunctionTemplate> tpl = Nan::New<FunctionTemplate>(New);
  tpl->SetClassName(Nan::New("Language").ToLocalChecked());
  tpl->InstanceTemplate()->SetInternalFieldCount(1);

  Local<Function> constructor = tpl->GetFunction();
  Local<Object> instance = constructor->NewInstance(Nan::GetCurrentContext()).ToLocalChecked();
  Nan::SetInternalFieldPointer(instance, 0, tree_sitter_c());

  instance->Set(Nan::New("name").ToLocalChecked(), Nan::New("c").ToLocalChecked());
  module->Set(Nan::New("exports").ToLocalChecked(), instance);
}

NODE_MODULE(tree_sitter_c_binding, Init)

}  // namespace
