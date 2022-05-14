.PHONY: build

all: build run_server


build_skin:
	cppcms_tmpl_cc ./project/templates/index.tmpl -o index_skin.cpp

build:
	make build_skin
	g++ project/main.cpp index_skin.cpp -o main -lcppcms -lbooster

run_server:
	./main -c ./project/config.json
