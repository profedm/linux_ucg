//Liberias
#include <stdio.h>
#include <iostream>

//ROS
#include <ros/ros.h>
#include <std_msgs/Int64.h>
#include <std_msgs/String.h>
#include <std_msgs/Bool.h>
#include <geometry_msgs/Point.h>
#include <std_msgs/UInt16MultiArray.h>

//Publishers
ros::Publisher int_pub;
ros::Publisher str_pub;
ros::Publisher bol_pub;
ros::Publisher pnt_pub;
ros::Publisher vec_pub;

//Metodo principal
int main(int argc, char** argv)
{
    //Inicializar nodo (registro)
    ros::init(argc, argv, "talker");

    //Crear objeto nodehandle
    ros::NodeHandle n("~");

    //Informar a nodehandle de publicacion de mensaje
    int_pub = n.advertise<std_msgs::Int64>("/talker/entero", 1);
    str_pub = n.advertise<std_msgs::String>("/talker/mensaje", 1);
    bol_pub = n.advertise<std_msgs::Bool>("/talker/estado", 1);
    pnt_pub = n.advertise<geometry_msgs::Point>("/talker/punto", 1);
    vec_pub = n.advertise<std_msgs::UInt16MultiArray>("/talker/vector", 1);

    //Definir la tasa de procesamiento
    ros::Rate loop_rate(15);

    //Crear mensaje
    std_msgs::Int64 int_msg;
    std_msgs::String str_msg;
    std_msgs::Bool bol_msg;
    geometry_msgs::Point pnt_msg;
    std_msgs::UInt16MultiArray vec_msg;

    //Llenar campos
    int_msg.data = 10;
    str_msg.data = "Hola a todos!!!, hay un errorrrrrrrrr";
    bol_msg.data = true;
    pnt_msg.x = 10.0;
    pnt_msg.y = 0.0;
    pnt_msg.z = -10.0;
    vec_msg.data.push_back(-1);
    vec_msg.data.push_back(0);
    vec_msg.data.push_back(1);

    //Ciclo principal
    while(ros::ok())
    {
        //Publicar mensajes
        int_pub.publish(int_msg);
        str_pub.publish(str_msg);
        bol_pub.publish(bol_msg);
        pnt_pub.publish(pnt_msg);
        vec_pub.publish(vec_msg);

        //Retardo
        loop_rate.sleep();
    }

}
