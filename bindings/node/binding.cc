#include "tree_sitter/parser.h"
#include <node.h>
#include "nan.h"

using namespace v8;

extern "C" TSLanguage * tree_sitter_typescript();
extern "C" TSLanguage * tree_sitter_tsx();

namespace {

NAN_METHOD(New) {}

void Init(Local<Object> exports, Local<Object> module) {
  Local<FunctionTemplate> ts_tpl = Nan::New<FunctionTemplate>(New);
  ts_tpl->SetClassName(Nan::New("Language").ToLocalChecked());
  ts_tpl->InstanceTemplate()->SetInternalFieldCount(1);
  Local<Function> ts_constructor = Nan::GetFunction(ts_tpl).ToLocalChecked();
  Local<Object> ts_instance = ts_constructor->NewInstance(Nan::GetCurrentContext()).ToLocalChecked();
  Nan::SetInternalFieldPointer(ts_instance, 0, tree_sitter_typescript());
  Nan::Set(ts_instance, Nan::New("name").ToLocalChecked(), Nan::New("typescript").ToLocalChecked());

  Local<FunctionTemplate> tsx_tpl = Nan::New<FunctionTemplate>(New);
  tsx_tpl->SetClassName(Nan::New("Language").ToLocalChecked());
  tsx_tpl->InstanceTemplate()->SetInternalFieldCount(1);
  Local<Function> tsx_constructor = Nan::GetFunction(tsx_tpl).ToLocalChecked();
  Local<Object> tsx_instance = tsx_constructor->NewInstance(Nan::GetCurrentContext()).ToLocalChecked();
  Nan::SetInternalFieldPointer(tsx_instance, 0, tree_sitter_tsx());
  Nan::Set(tsx_instance, Nan::New("name").ToLocalChecked(), Nan::New("tsx").ToLocalChecked());

  Nan::Set(exports, Nan::New("typescript").ToLocalChecked(), ts_instance);
  Nan::Set(exports, Nan::New("tsx").ToLocalChecked(), tsx_instance);
}

NODE_MODULE(tree_sitter_typescript_binding, Init)

}  // namespace
