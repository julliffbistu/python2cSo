#include<iostream>
#include<opencv2/opencv.hpp>
#include"config.h"
//https://www.runoob.com/cplusplus/cpp-namespaces.html
//g++ -fpic -shared test.cpp -o libtest.so `pkg-config opencv --cflags --libs`
//g++ test.cpp -o libtest.so -shared -fpic `pkg-config opencv --cflags --libs`
using namespace cv;
using namespace std;

extern "C"
{
	int do_main();
	void dayin()
	{
		std::cout<<" main "<<std::endl;
	}
}

int do_main()
//int main( int argc, char* argv[], char **env)
//int main(int argc, char *argv[], char *env[])   
{
	Mat image = imread("/home/zhulifu/Desktop/opencvtest/beef/1.jpg");
	string name = Config::nane;
	std::cout<< " name is: "<<name<<std::endl;

	vector <std::string> wife;
	wife = Config::names;
	for(int i = 0; i < 4; i++)
	{
		std::cout<<" wife "<< i << " is: "<<wife[i]<<std::endl;
	}

	Config::add();

	if (image.data != NULL)
	{
		//show the image
		imshow("clock", image);
		waitKey(0);
	}
	else
	{
		cout << "can not open the file!" << endl;
		getchar();
	}
	return 0;
}

int main(int argc, char** argv)
//int main( int argc, char* argv[], char **env)
//int main(int argc, char *argv[], char *env[])   
{
	std::cout<<"the argv is: "<<argv[0]<<"\t"<<argv[1]<<"\t"<< argv[2]<<std::endl;
	//Mat image = imread(argv);
	std::string arg(argv[1]);
	Mat image = imread("/home/zhulifu/Desktop/opencvtest/beef/1.jpg");
	string name = Config::nane;
	std::cout<< " name is: "<<name<<std::endl;

	vector <std::string> wife;
	wife = Config::names;
	for(int i = 0; i < 4; i++)
	{
		std::cout<<" wife "<< i << " is: "<<wife[i]<<std::endl;
	}

	Config::add();

	if (image.data != NULL)
	{
		//show the image
		imshow("clock", image);
		waitKey(0);
	}
	else
	{
		cout << "can not open the file!" << endl;
		getchar();
	}
	return 0;
}

