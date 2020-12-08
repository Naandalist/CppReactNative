#include "hello_world_impl.hpp"
#include <string>

namespace helloworld
{

std::shared_ptr<HelloWorld> HelloWorld::create()
{
    return std::make_shared<HelloWorldImpl>();
}

HelloWorldImpl::HelloWorldImpl()
{
}

std::string HelloWorldImpl::get_hello_world()
{
    std::string myString = "Hi, i am string from C++.";
    return myString;
}
} // namespace helloworld
