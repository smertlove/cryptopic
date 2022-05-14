#include <cppcms/application.h>  
#include <cppcms/applications_pool.h>  
#include <cppcms/service.h>  
#include <cppcms/http_response.h>  
#include <cppcms/url_dispatcher.h>  
#include <iostream>  
  
#include "./content/index.h"   

// http://localhost:8080/hello


class Index : public cppcms::application {
public:
    Index(cppcms::service &s) :
    cppcms::application(s){ }
    virtual void main(std::string /*url*/) {
        content::Index index;
        index.title = "Cryptopic";
        render("index", index);
        std::cout << "GET: Index" << std::endl;
    }
};


int main(int argc,char ** argv) {
    try {
        cppcms::service srv(argc, argv);
        srv.applications_pool().mount(cppcms::applications_factory<Index>());
        std::cout << "the server is being run on http://localhost:8080/index" << std::endl;
        srv.run();
    } catch(std::exception const &e) {
        std::cerr << e.what() << std::endl;
    }
}