#!/bin/bash
echo enter libname:
read libname
mkdir src
read header_name
cp -r ${REPO}/headers/project.h headers/$header_name.h
sed -i "8i#ifndef ${header_name^^}_H" headers/$header_name.h
sed -i "9i \ \ \ \ #define ${header_name^^}_H" headers/$header_name.h
