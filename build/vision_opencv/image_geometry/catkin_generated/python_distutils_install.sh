#!/bin/sh -x

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

cd "/users/studs/bsc/2015/barakgo/catkin_ws/src/vision_opencv/image_geometry"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
/usr/bin/env \
    PYTHONPATH="/users/studs/bsc/2015/barakgo/catkin_ws/install/lib/python2.7/dist-packages:/users/studs/bsc/2015/barakgo/catkin_ws/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/users/studs/bsc/2015/barakgo/catkin_ws/build" \
    "/usr/bin/python" \
    "/users/studs/bsc/2015/barakgo/catkin_ws/src/vision_opencv/image_geometry/setup.py" \
    build --build-base "/users/studs/bsc/2015/barakgo/catkin_ws/build/vision_opencv/image_geometry" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/users/studs/bsc/2015/barakgo/catkin_ws/install" --install-scripts="/users/studs/bsc/2015/barakgo/catkin_ws/install/bin"
