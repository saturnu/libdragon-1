controller_scan();
struct controller_data keys = get_keys_pressed();		
		
// DPAD
dpad_up=0;
dpad_down=0;
dpad_left=0;
dpad_right=0;
		
if (keys.c[0].up)
    dpad_up=1;

if (keys.c[0].down)
    dpad_down=1;
			
if (keys.c[0].left)
    dpad_left=1;
            
if (keys.c[0].right)
    dpad_right=1;
		
// A
if (keys.c[0].A)
{
    if (a_button==0)
        a_button=1;
    else
        a_button=2;
}	
else
    a_button=0;
		
// B
if (keys.c[0].B)
{
    if (b_button==0)
        b_button=1;
    else
        b_button=2;
}	
else
    b_button=0;		
		
// Z
if (keys.c[0].Z)
{
    if (z_button==0)
        z_button=1;
    else
        z_button=2;
}	
else
    z_button=0;	

// L
if (keys.c[0].L)
{
    if (l_button==0)
        l_button=1;
    else
        l_button=2;
}	
else
    l_button=0;		
		
// R
if (keys.c[0].R)
{
    if (r_button==0)
        r_button=1;
    else
        r_button=2;
}	
else
    r_button=0;	

// C-LEFT
if (keys.c[0].C_left)
{
    if (c_left==0)
        c_left=1;
    else
        c_left=2;
}	
else
    c_left=0;	

// C-RIGHT
if (keys.c[0].C_right)
{
    if (c_right==0)
        c_right=1;
    else
        c_right=2;
}	
else
    c_right=0;	

// C-DOWN
if (keys.c[0].C_down)
{
    if (c_down==0)
        c_down=1;
    else
        c_down=2;
}	
else
    c_down=0;
		
// C-UP
if (keys.c[0].C_up)
{
    if (c_up==0)
        c_up=1;
    else
        c_up=2;
}	
else
    c_up=0;

// START
if (keys.c[0].start)
{
    if (start_button==0)
        start_button=1;
    else
        start_button=2;
}	
else
    start_button=0;		