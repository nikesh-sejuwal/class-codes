struct Create{
    float mass,velocity,color;
    vec2 plot,offset;
    }
    
void Display(Create s,inout fragColor,fragCoord){



}


.void mainImage( out vec4 fragColor, in vec2 fragCoord )
{
    // Normalized pixel coordinates (from 0 to 1)
    vec2 uv = fragCoord/iResolution.xy;

    // Time varying pixel color
    vec3 col = 0.5 + 0.5*cos(iTime+uv.xyx+vec3(0,2,4));

    // Output to screen
    fragColor = vec4(col,1.0);
    
    float x1,offx1,y1,offy1,x2,offx2,y2,offy2;
    
    //  Big mass 
    x1=400.0,y1=5.0,offy1=120.0,offx1=120.0;
    
    // Small mass
    
    x2=200.0,y2=2.50,offy2=60.0,offx2=60.0;
    
    // Bigmass and small mass weight 
    float BigMass=10.0,BigVelocity=4,BigColor=1.0;
    float SmallMass=12.0,Smallvelocity=0,SmallColor=0.0;

    Create small=Create(SmallMass,Smallvelocity,SmallColor,vec2(x2,y2),vec2(offx2,offy2));
    Display(small,fragColor,fragCoord);


    Create Big=Create(BigMass,BigVelocity,BigColor,vec2(x1,y1),vec2(offx1,offy1));
    
    Display(Big,fragColor,fragCoord);
    
    
    
    
}