SUBDIRS = src tests

include buildsys.mk
include emmake.mk

tests: src
