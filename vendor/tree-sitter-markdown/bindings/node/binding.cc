#include "tree_sitter/parser.h"
#include <node.h>
#include "nan.h"

using namespace v8;

extern "C" TSLanguage * tree_sitter_markdown();
extern "C" TSLanguage * tree_sitter_markdown_inline();

namespace {

NAN_METHOD(New) {}

void Init(Local<Object> exports, Local<Object> module) {
  Local<FunctionTemplate> tpl = Nan::New<FunctionTemplate>(New);
  tpl->SetClassName(Nan::New("Language").ToLocalChecked());
  tpl->InstanceTemplate()->SetInternalFieldCount(1);

  Local<Function> constructor = Nan::GetFunction(tpl).ToLocalChecked();

  Local<Object> instance_block = constructor->NewInstance(Nan::GetCurrentContext()).ToLocalChecked();
  Nan::SetInternalFieldPointer(instance_block, 0, tree_sitter_markdown());
  Nan::Set(instance_block, Nan::New("name").ToLocalChecked(), Nan::New("markdown").ToLocalChecked());
  Nan::Set(exports, Nan::New("markdown").ToLocalChecked(), instance_block);

  Local<Object> instance_inline = constructor->NewInstance(Nan::GetCurrentContext()).ToLocalChecked();
  Nan::SetInternalFieldPointer(instance_inline, 0, tree_sitter_markdown_inline());
  Nan::Set(instance_inline, Nan::New("name").ToLocalChecked(), Nan::New("markdown_inline").ToLocalChecked());
  Nan::Set(exports, Nan::New("markdown_inline").ToLocalChecked(), instance_inline);
}

NODE_MODULE(tree_sitter_markdown_binding, Init)

}  // namespace

