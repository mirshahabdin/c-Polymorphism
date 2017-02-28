compiler = gcc

objs = ddeq.o solv95_3.o model.o

model: $(objs)
	$(compiler) -o model $(objs) -lm

ddeq.o: ddeq.c
	$(compiler) -c ddeq.c
solv95_3.o: solv95_3.c
	$(compiler) -c solv95_3.c
model.o: model.c
	$(compiler) -c model.c

clear:
	rm -f *.o model

clean:
	rm -f results/*.data

run:
	if [ ! -d results ]; then mkdir results; fi
	./model
