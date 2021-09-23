#!/bin/sh

git log -5 --pretty=format:"%H" | sed '6d'
