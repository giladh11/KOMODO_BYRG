#!/usr/bin/env python

__author__ = 'tom'
import rospy
import sys
from GUI.MainWindow import MainWindow
from PyQt4.QtGui import *


def main():
    rospy.init_node('ric_imuCalib')
    app = QApplication(sys.argv)
    form = MainWindow()
    form.show()
    app.exec_()

if __name__ == '__main__':
    main()
