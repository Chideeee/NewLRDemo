Action()
{
	//added comments
	web_websocket_send("ID=0", 
		"Buffer/Bin="
		"\\x4D\\x53\\x47\\x23\\x31\\x23\\x32\\x23\\x31\\x23\\x31\\x30\\x32\\x34\\x3A\\x31\\x32\\x3A\\x33\\x33\\x3A\\x31\\x30\\x33\\x31\\x3A\\x30\\x2C\\x31\\x31\\x32\\x3D\\x32\\x30\\x3A\\x43\\x68\\x72\\x6F\\x6D\\x65\\x2F\\x38\\x34\\x2E\\x30\\x2E\\x34\\x31\\x34\\x37\\x2E\\x31\\x30\\x35\\x2C\\x31\\x31\\x33\\x3D\\x32\\x30\\x3A\\x43\\x68\\x72\\x6F\\x6D\\x65\\x2F\\x38\\x34\\x2E\\x30\\x2E\\x34\\x31\\x34\\x37\\x2E\\x31\\x30\\x35\\x2C\\x31\\x31\\x34\\x3D\\x32\\x37\\x3A\\x43\\x68\\x72\\x6F\\x6D\\x65\\x5F\\x52\\x65\\"
		"x6E\\x64\\x65\\x72\\x57\\x69\\x64\\x67\\x65\\x74\\x48\\x6F\\x73\\x74\\x48\\x57\\x4E\\x44\\x2C\\x31\\x31\\x36\\x3D\\x35\\x3A\\x65\\x6E\\x2D\\x55\\x53\\x3B", 
		"IsBinary=1", 
		LAST);

	/*Connection ID 0 received buffer WebSocketReceive0*/

	/*Connection ID 0 received buffer WebSocketReceive1*/

	/*Connection ID 0 received buffer WebSocketReceive2*/

	web_set_sockets_option("SSL_VERSION", "AUTO");

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("www.google.com", 
		"URL=http://www.google.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://www.google.com/images/branding/googlelogo/1x/googlelogo_color_272x92dp.png", "Referer=https://www.google.com/", ENDITEM, 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-site");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("Origin", 
		"https://www.google.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	lr_think_time(12);

	web_custom_request("log", 
		"URL=https://play.google.com/log?format=json&hasfast=true", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.google.com/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded;charset=UTF-8", 
		"Body=[[1,null,null,null,null,null,null,null,null,null,[null,null,null,null,\"en-NG\"]],373,[[\"1596569594308\",null,[],null,null,null,null,\"[98,40400,1,1,\\\"323282162.0\\\",\\\"67cpX-vRB6-VlwTzx5jgCA\\\",null,null,null,\\\"en\\\",\\\"NGA\\\",0,1,31249,null,false,false,null,\\\"og-0f991575-7b03-4fec-b0a5-f96f9c04410e\\\",null,null,null,null,null,true,false,null,null,null,null,null,null,null,null,null,null,null,1,null,[\\\"pa`2`2\\\",\\\"Error: pa`2`2\\\\n    at _.$q.<anonymous> (https://"
		"www.google.com/?gws_rd=ssl:315:236)\\\",null,null,1]]\",null,null,null,null,null,null,null,[null,[],null,\"[[],[],[3700746,3700817],[]]\"],null,null,null,[],1,null,null,null,null,null,[]]],\"1596569595310\",[],null,null,null,null,null,null,null,null,0]", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("checkin", 
		"URL=https://android.clients.google.com/checkin", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-protobuffer", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncType=application/x-protobuf", 
		"BodyBinary=\\x10\\x88\\xE8\\xD0\\xFA\\xE5\\xB7\\xFB\\x92A\\x1A*1-36c1cff674703e377af9e0ecd2a1cc4c51acdecf\"\\x17`\\x03j\\x13\\x08\\x01\\x12\r84.0.4147.105\\x18\\x01i?3G.\\\\\\xF9\\x88%p\\x03\\xB0\\x01\\x00", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Site", 
		"same-site");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("mail", 
		"URL=https://mail.google.com/mail/?tab=wm&ogbl", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.com/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(14);

	web_websocket_close("ID=0", 
		"Code=1001", 
		LAST);

	return 0;
}