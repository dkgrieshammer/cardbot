void left() {
    M2.setmotor(_CW, speed);
}

void right() {
    M1.setmotor(_CW, speed);
}

void stop() {
    M1.setmotor(_SHORT_BRAKE);
    M2.setmotor(_SHORT_BRAKE);
}

void back() {
    M1.setmotor(_CCW, speed);
    M2.setmotor(_CCW, speed);
}

void fwd() {
    M1.setmotor(_CW, speed);
    M2.setmotor(_CW, speed);
}

