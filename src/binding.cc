#include "tree_sitter/parser.h"
#include <node.h>
#include "nan.h"

using namespace v8;

extern "C" TSLanguage * ts_language_javascript();

namespace tree_sitter_javascript {

NAN_METHOD(New) {}

void Init(Handle<Object> exports, Handle<Object> module) {
  Local<FunctionTemplate> tpl = Nan::New<FunctionTemplate>(New);
  tpl->SetClassName(Nan::New("Language").ToLocalChecked());
  tpl->InstanceTemplate()->SetInternalFieldCount(1);

  Local<Function> constructor = tpl->GetFunction();
  Local<Object> instance = constructor->NewInstance(0, NULL);
  Nan::SetInternalFieldPointer(instance, 0, ts_language_javascript());

  instance->Set(Nan::New("name").ToLocalChecked(), Nan::New("javascript").ToLocalChecked());
  module->Set(Nan::New("exports").ToLocalChecked(), instance);
}

NODE_MODULE(ts_language_javascript_binding, Init)

}  // namespace tree_sitter_javascript
