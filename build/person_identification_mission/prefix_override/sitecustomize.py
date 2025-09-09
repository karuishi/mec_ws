import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/bill8/mec_ws/mec_ws/install/person_identification_mission'
