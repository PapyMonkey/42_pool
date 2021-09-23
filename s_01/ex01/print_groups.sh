#!/bin/sh

id -p $FT_USER | grep groups | sed "s/ /,/g" | cut -c 8- | tr -d "\n"
