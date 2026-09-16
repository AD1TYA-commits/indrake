#include "Document.hpp"
Document::Document(int id,std::string filename,std::string content)
    : id(id),filename(std::move(filename)),content(std::move(content)){}
int Document::getId() const{
    return id;
}
const std::string& Document::getFilename() const{
    return filename;
}
const std::string& Document::getContent() const{
    return content;
}
