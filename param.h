#define t0 0.0        /* default start time */
#define t1 300.0     /* default stop time */
#define ddt 1.0        /* initial timestep */
#define tol 0.000005  /* integration tolerance */
#define dout 1.0    /* approximate average output timestep */
#define hbsize 20000000L  /* how many past values to store for each history variable */
#define nhv 1         /* Number of history (lagged) variables */
#define nlag 1        /* Number of lag markers per history variable (set to 1 if unsure)*/
#define nsw 0         /* number of switch varaibles */
#define ns 1
#define no_var 1