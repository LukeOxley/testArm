#include <test_arm_hardware_interface/test_arm_hardware_interface.h>
int main(int argc, char** argv)
{
    ros::init(argc, argv, "test_arm_hardware_interface");

    ros::NodeHandle nh;

    // Setup a separate thread that will be used to service ROS callbacks.
    ros::AsyncSpinner spinner(1);
    spinner.start();

    test_arm_hardware_interface::TestArmHardwareInterface rhi(nh);

    return 0;
}
