#include "tree_sitter/parser.h"
#include <node.h>
#include "nan.h"

using namespace v8;

extern "C" TSLanguage * tree_sitter_xml();
extern "C" TSLanguage * tree_sitter_dtd();

namespace {

NAN_METHOD(New) {}

void Init(Local<Object> exports, Local<Object> module) {
    Local<FunctionTemplate> xml_tpl = Nan::New<FunctionTemplate>(New);
    xml_tpl->SetClassName(Nan::New("Language").ToLocalChecked());
    xml_tpl->InstanceTemplate()->SetInternalFieldCount(1);
    Local<Function> xml_constructor = Nan::GetFunction(xml_tpl).ToLocalChecked();
    Local<Object> xml_instance = xml_constructor->NewInstance(Nan::GetCurrentContext()).ToLocalChecked();
    Nan::SetInternalFieldPointer(xml_instance, 0, tree_sitter_xml());
    Nan::Set(xml_instance, Nan::New("name").ToLocalChecked(), Nan::New("xml").ToLocalChecked());

    Local<FunctionTemplate> dtd_tpl = Nan::New<FunctionTemplate>(New);
    dtd_tpl->SetClassName(Nan::New("Language").ToLocalChecked());
    dtd_tpl->InstanceTemplate()->SetInternalFieldCount(1);
    Local<Function> dtd_constructor = Nan::GetFunction(dtd_tpl).ToLocalChecked();
    Local<Object> dtd_instance = dtd_constructor->NewInstance(Nan::GetCurrentContext()).ToLocalChecked();
    Nan::SetInternalFieldPointer(dtd_instance, 0, tree_sitter_dtd());
    Nan::Set(dtd_instance, Nan::New("name").ToLocalChecked(), Nan::New("dtd").ToLocalChecked());

    Nan::Set(exports, Nan::New("xml").ToLocalChecked(), xml_instance);
    Nan::Set(exports, Nan::New("dtd").ToLocalChecked(), dtd_instance);
}

NODE_MODULE(tree_sitter_xml_binding, Init)

}  // namespace
