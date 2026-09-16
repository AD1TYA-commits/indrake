#pragma once
#include <string>

class Document {
    private:
        int id;
        std::string filename;
        std::string content;
    public:
        Document(int id,std::string filename,std::string content);
        int getId() const;
        const std::string& getFilename() const;
        const std::string& getContent() const;
};
