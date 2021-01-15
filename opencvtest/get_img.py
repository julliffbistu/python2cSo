 #!/usr/bin/env python

import roslib
import sys
import rospy
import cv2
from cv_bridge import CvBridge, CvBridgeError
from sensor_msgs.msg import Image
import numpy as np
import os



ROOT_DIR = os.path.abspath("./")
sys.path.append(ROOT_DIR)
print "niubibibibi:::::",ROOT_DIR

count_rgb = 1
def callback_rgb(image):

    global count_rgb
    bridge=CvBridge()
    cv_image =bridge.imgmsg_to_cv2(image,"passthrough")
    cv2.imshow("img",cv_image)
    if cv2.waitKey(1) & 0xFF == ord('s'):
        #cv2.imwrite("ROOT_DIR//model_val//get_datas//" + str(count_rgb) + ".jpg", cv_image)
        cv2.imwrite("./model_val/get_datas/" + str(count_rgb) + ".jpg", cv_image)
        print("save %d.jpg"%count_rgb)
        count_rgb=count_rgb+1

    if cv2.waitKey(1) & 0xFF == ord('q'):
        cv2.destroyAllWindows()

def listener():
    rospy.init_node("maskrcnn_node")
    rospy.Subscriber("/kinect2/qhd/image_color_rect",Image,callback_rgb)
    rospy.spin()
if __name__ == '__main__':  
    listener()
    cv2.destroyAllWindows()
