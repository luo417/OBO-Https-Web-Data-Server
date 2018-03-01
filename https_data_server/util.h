#ifndef __OBO_BUSI_H__
#define __OBO_BUSI_H__

#define MYHTTPD_SIGNATURE   "MoCarHttpd v0.1"

#include <event2/bufferevent.h>
#include <event2/bufferevent_ssl.h>
#include <event2/event.h>
#include <event2/http.h>
#include <event2/buffer.h>
#include <event2/util.h>
#include <event2/keyvalq_struct.h>
#include <openssl/ssl.h>
#include <openssl/err.h>


void persistent_cb (struct evhttp_request *req, void *arg);
void cache_cb (struct evhttp_request *req, void *arg);


#endif
