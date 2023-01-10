#include "tree_sitter/parser.h"
#include <node.h>
#include "nan.h"

using namespace v8;

extern "C" TSLanguage * tree_sitter_ocaml();
extern "C" TSLanguage * tree_sitter_ocaml_interface();

namespace {

NAN_METHOD(New) {}

void Init(Local<Object> exports, Local<Object> module) {
  Local<FunctionTemplate> ocaml_tpl = Nan::New<FunctionTemplate>(New);
  ocaml_tpl->SetClassName(Nan::New("Language").ToLocalChecked());
  ocaml_tpl->InstanceTemplate()->SetInternalFieldCount(1);
  Local<Function> ocaml_constructor = Nan::GetFunction(ocaml_tpl).ToLocalChecked();
  Local<Object> ocaml_instance = ocaml_constructor->NewInstance(Nan::GetCurrentContext()).ToLocalChecked();
  Nan::SetInternalFieldPointer(ocaml_instance, 0, tree_sitter_ocaml());
  Nan::Set(ocaml_instance, Nan::New("name").ToLocalChecked(), Nan::New("ocaml").ToLocalChecked());

  Local<FunctionTemplate> iface_tpl = Nan::New<FunctionTemplate>(New);
  iface_tpl->SetClassName(Nan::New("Language").ToLocalChecked());
  iface_tpl->InstanceTemplate()->SetInternalFieldCount(1);
  Local<Function> iface_constructor = Nan::GetFunction(iface_tpl).ToLocalChecked();
  Local<Object> iface_instance = iface_constructor->NewInstance(Nan::GetCurrentContext()).ToLocalChecked();
  Nan::SetInternalFieldPointer(iface_instance, 0, tree_sitter_ocaml_interface());
  Nan::Set(iface_instance, Nan::New("name").ToLocalChecked(), Nan::New("ocaml_interface").ToLocalChecked());

  Nan::Set(exports, Nan::New("ocaml").ToLocalChecked(), ocaml_instance);
  Nan::Set(exports, Nan::New("interface").ToLocalChecked(), iface_instance);
}

NODE_MODULE(tree_sitter_ocaml_binding, Init)

}  // namespace
