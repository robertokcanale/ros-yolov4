#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/maclab/Documents/RCanale/ros-yolov4/src/scaled_yolov4"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/maclab/Documents/RCanale/ros-yolov4/install/lib/python3/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/maclab/Documents/RCanale/ros-yolov4/install/lib/python3/dist-packages:/home/maclab/Documents/RCanale/ros-yolov4/build/lib/python3/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/maclab/Documents/RCanale/ros-yolov4/build" \
    "/usr/bin/python3" \
    "/home/maclab/Documents/RCanale/ros-yolov4/src/scaled_yolov4/setup.py" \
     \
    build --build-base "/home/maclab/Documents/RCanale/ros-yolov4/build/scaled_yolov4" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/maclab/Documents/RCanale/ros-yolov4/install" --install-scripts="/home/maclab/Documents/RCanale/ros-yolov4/install/bin"
