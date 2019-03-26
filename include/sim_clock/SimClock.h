#include <ros/ros.h>
#include "rosplan_knowledge_msgs/SetInt.h"
#include "rosgraph_msgs/Clock.h"

#ifndef KCL_simclock
#define KCL_simclock

namespace KCL_rosplan {

	class SimClock
	{

	private:

        ros::ServiceServer time_server;

	public:

		/* constructor */
		SimClock(ros::NodeHandle &nh);
        bool setTmeScale(rosplan_knowledge_msgs::SetInt::Request &req, rosplan_knowledge_msgs::SetInt::Response &res);
        int time_scale;
        ros::Publisher clock_pub;
	};
}
#endif
