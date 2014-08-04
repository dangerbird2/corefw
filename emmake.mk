#builds emscripten tests for corefw

.PHONY: js html emclean

EMCC=emcc
EMCFLAGS=-g -Wall -O0


JSTEST_LIBS=src/libcorefw.so
JSTEST_SRC=jstests/main.c
JSTEST_OUT=jstests/out.js

$(JSTEST_OUT):emclean
	$(EMCC) $(EMCFLAGS) $(JSTEST_LIBS) $(JSTEST_SRC) -o $@

js:$(JSTEST_OUT)
	node ./$(JSTEST_OUT)



emclean:
	rm -f $(JSTEST_OUT_HTML) $(JSTEST_OUT_JS)