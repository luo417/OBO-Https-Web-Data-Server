kill -9 `ps aux|grep "web_server"| grep -v "grep"|awk '{print $2}'`
kill -9 `ps aux|grep "data_server"| grep -v "grep"|awk '{print $2}'`

cd ./https_web_server/
./web_server &
cd ..
cd ./https_data_server/
./data_server &
cd ..
