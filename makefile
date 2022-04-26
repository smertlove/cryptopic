.PHONY: build

all: build run_server


build_skin:
	cppcms_tmpl_cc ./project/templates/index.tmlp -o index_skin.cpp

build:
	make build_skin
	g++ project/hello.cpp index_skin.cpp -o hello -lcppcms -lbooster

run_server:
	./hello -c ./project/config.json
