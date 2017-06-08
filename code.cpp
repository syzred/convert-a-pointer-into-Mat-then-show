
//数组array作为图像数据存入image，并显示在窗口showwindow中
	unsigned char *array = (unsigned char *)calloc(width * height,sizeof(unsigned char));
	Mat image(height, width, CV_8UC1, (unsigned char*)array);
	namedWindow("showwindow", CV_WINDOW_AUTOSIZE);
	imshow("showwindow", image);
	waitKey(0);
