#include<stdio.h>
#include<ev.h>
#include<signal.h>
#include<sys/unistd.h>

ev_io stdin_watcher;
ev_timer timeout_watcher;

static void 
stdin_cb(EV_P_ ev_io *w, int revents ){
  puts("stdin ready");
  ev_io_stop(EV_A_ w);
    
}

