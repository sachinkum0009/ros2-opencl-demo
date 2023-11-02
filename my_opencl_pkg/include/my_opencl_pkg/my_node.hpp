#pragma once

/**
 * 
 * @author Sachin Kumar
 * @version 02-11-2023
*/

#define CL_HPP_TARGET_OPENCL_VERSION 300

#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#include <CL/opencl.hpp>
#include <iostream>

namespace my_node
{
    class MyNode {
    public:
        MyNode();
        ~MyNode();
    private:
        std::vector<cl::Platform> all_platforms;
        cl::Context *context;
        cl::Device default_device;
        cl::Program *program;
    };
} // namespace my_node
