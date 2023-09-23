#!/bin/sh
ifconfig | grep ether | awk '{print }' | tr -d ' '
