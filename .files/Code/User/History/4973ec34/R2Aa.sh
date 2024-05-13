#!/bin/bash
echo enter libname:
read libname
mkdir src
cp -r ${REPO}/headers/project.h headers/$libname.h
sed -i "8i#ifndef ${libname^^}_H" headers/$libname.h
sed -i "9i \ \ \ \ #define ${libname^^}_H" headers/$libname.h
cp -r ~/lib_workshop/my_libc/Makefile .
