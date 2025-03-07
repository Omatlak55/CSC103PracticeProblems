/* TODO: for each of the following snippets, re-write something
 * which is (a) functionally equivalent and (b) USES ONLY WHILE
 * LOOPS FOR FLOW OF CONTROL.
 * NOTE: b,b1,b2, etc will denote boolean expressions and other
 * upper case letters like X,Y, etc denote arbitrary statements.
 * In contrast with almost all else we've done, this code is not
 * meant to compile or run.  Just something fun to think about.
 * NOTE: this is for educational purposes, and naturally you
 * should not write normal code using only while loops!
 * HINT: at times you may need to introduce a new variable (and
 * if you do all of these without, show me how!). */

/* 1. */

// if (b) {
// 	X;
// }

while (b) {
    X;
}



/* 2. */

// for (X; b; Y) {
// 	Z;
// }

//for(int i; i < 1; i++)

X;
while (b) {
    Z;
    Y;
}


/* 3. */

// do {
// 	X;
// } while (b);

while (true) {
    X;
    if (!b) {
        break;
    }
}

/* 4. */

// if (b) {
// 	X;
// } else {
// 	Y;
// }


while(true) {
    while (b) {
    X;
}
    while (!b) {
    Y;
}
}   

/* 5. */

// if (b1) {
// 	X;
// } else if (b2) {
// 	Y;
// } else if (b3) {
// 	Z;
// }

while(true) {
    while (b1) {
    X;
}
    while(!b1) {

        while (b2) {
        Y;
        }

        while(!b2) {
            while (b3) {
            Z;
            }
        }
    }
}

//couldn't figure out the correct way to do this one.