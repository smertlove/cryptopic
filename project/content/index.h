#include <cppcms/view.h>
#include <string>


namespace content {

struct Index : public cppcms::base_content {
    std::string title;
};

}  // namespace content