/* adv02.c: Skeleton Adventure - copyright Mike Arnautov 2018. Licensed under
 * GPL (version 3 or later) or the Modified BSD Licence, whichever
 * is asserted by the supplied LICENCE file.*/

#include "adv0.h"
#include "adv3.h"
int p36(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
bitmod('s',evar(78),1);
value[0]=(bitest(evar(92),3));
if(value[0]){
bitmod('c',evar(78),1);
return 0;
}
lbts[0*VARSIZE]= -1; lval[0]=FOBJ-1; while (++lval[0]<=LOBJ) {
if (!isat(lval[0],-1,-1,value[92])) continue;
if (!lbitest(0,17,lval,lbts)) continue;
bitmod('c',evar(78),1);
return 0;
}
return 0;
}
int p48(int typ0,int par0)
{
   int lval [1];
   short lbts [1];
   lval[0] = par0;
   lbts [0] = typ0;
value[0]=(lbitest(0,0,lval,lbts));
if(value[0]){
value[0]=(ishere(lval[0],-1,-1));
if(value[0]){
say(72,113,lval[0]);
 if (loop) return(0);}
say(72,112,lval[0]);
 if (loop) return(0);}
say(64,129,0);
 if (loop) return(0);return 0;
}
int p30(void)
{
   int lval [2];
   short lbts [2];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
lbts[0*VARSIZE]= -1; lval[0]=FOBJ-1; while (++lval[0]<=LOBJ) {
if (!isat(lval[0],-1,-1,value[92])) continue;
if (!lbitest(0,21,lval,lbts)) continue;
lbitmod(2,'s',0,4,lval,lbts);
lval[1] += 1;
value[0]=(lbitest(0,3,lval,lbts));
if(!value[0]){
say(0,lval[0],0);
}}
say(0,98,0);
lbts[0*VARSIZE]= -1; lval[0]=FOBJ-1; while (++lval[0]<=LOBJ) {
if (!isat(lval[0],-1,-1,value[92])) continue;
if (!lbitest(0,21,lval,lbts)) continue;
value[0]=(lbitest(0,3,lval,lbts));
if(value[0]){
say(0,lval[0],0);
}}
say(0,98,0);
return 0;
}
int p11(void)
{
value[0]=(bitest(evar(78),1));
if(value[0]){
say(64,121,0);
 if (loop) return(0);}value[0]=(
bitest(evar(92),4));
value[0]&=(bitest(evar(78),2));
value[0]|=(bitest(evar(78),3));
value[0]|=(bitest(evar(78),9));
if(value[0]){
say(2,92,0);
}else{
say(34,92,0);
}
bitmod('s',evar(92),4);
p30();
if (loop) return (0);
return 0;
}
int p26(void)
{
set('V',84,'c',0,NULL,NULL);
set('V',85,'c',0,NULL,NULL);
value[84] -= value[86];
value[0]=(value[84]<0);
if(value[0]){
set('V',84,'c',0,NULL,NULL);
}
return 0;
}
int p21(void)
{
p26();
if (loop) return (0);
say(12,114,84);
say(12,116,85);
say(12,117,80);
value[0]=(value[84]<value[85]);
if(value[0]){
say(0,118,0);
}else{
say(0,119,0);
}
say(0,98,0);
finita(); loop=1; return(0);
return 0;
}
int p25(int typ0,int par0,int typ1,int par1)
{
   int lval [3];
   short lbts [3];
   lval[0] = par0;
   lbts [0] = typ0;
   lval[1] = par1;
   lbts [1] = typ1;
   lval[2] = 0;
   lbts [2] = 0;
value[0]=(lbitest(0,12,lval,lbts));
if(!value[0]){
set('L',2,'v',83,lval, lbts);
lval[2] += 1;
value[0]=(lbitest(0,13,lval,lbts));
if(value[0]){
lval[2] += 1;
}value[0]=(
lval[2]>10);
if(value[0]){
say(64,126,0);
 if (loop) return(0);}
set('V',83,'l',2,lval, lbts);
}value[0]=(
lbitest(0,7,lval,lbts));
if(value[0]){
lval[2]=value[lval[0]];lbts[2*VARSIZE]=lbts[0*VARSIZE];value[0]=(lval[2]==0);
if(value[0]){
value[lval[0]]=1;
}}
apport(lval[0],INHAND);
value[0]=(lval[1]!=0);
if(value[0]){
say(64,101,0);
 if (loop) return(0);}
return 0;
}
int p15(int typ0,int par0,int typ1,int par1)
{
   int lval [2];
   short lbts [2];
   lval[0] = par0;
   lbts [0] = typ0;
   lval[1] = par1;
   lbts [1] = typ1;
apport(value[74],HERE);
value[0]=(lbitest(0,12,lval,lbts));
if(!value[0]){
value[83] -= 1;
value[0]=(lbitest(0,13,lval,lbts));
if(value[0]){
value[83] -= 1;
}value[0]=(
value[83]<0);
if(value[0]){
set('V',83,'c',0,NULL,NULL);
}}
apport(lval[0],value[92]);
value[0]=(lval[1]!=0);
if(value[0]){
say(64,101,0);
 if (loop) return(0);}
return 0;
}
int p4(void)
{
value[0]=(value[78]==1);
if(value[0]){
value[0]=(45<=value[94] && value[94]<=56);
value[0]|=(KEY(19));
if(value[0]){
bitmod('s',evar(78),6);
say(76,130,94);
 if (loop) return(0);}value[0]=(
40<=value[94] && value[94]<=41);
if(value[0]){
say(0,141,0);
}else{
value[0]=(42<=value[94] && value[94]<=43);
if(value[0]){
say(12,104,94);
}else{
say(0,147,0);
}}
}else{
value[0]=(bitest(evar(95),0));
if(value[0]){
value[0]=(isnear(value[95],-1,-1));
if(value[0]){
say(12,148,94);
say(12,149,95);
}else{
say(12,104,95);
}
}else{
value[0]=(42<=value[95] && value[95]<=44);
if(value[0]){
value[0]=(KEY(50));
if(value[0]){
say(0,129,0);
}else{
value[0]=(42<=value[95] && value[95]<=43);
if(value[0]){
say(12,104,95);
}else{
say(12,148,94);
say(12,149,95);
}}
}else{
say(0,133,0);
}}}
loop=1; return(0);
return 0;
}
int p51(void)
{
value[0]=(value[78]>1);
if(value[0]){
say(12,158,95);
}
return 0;
}
int p5(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
value[0]=(KEY(46));
value[0]|=(KEY(47));
if(value[0]){
return 0;
}
lval[0]=3;lbts[0*VARSIZE]= -1;
value[0]=(lval[0]==value[94]);
if(value[0]){
say(64,156,0);
 if (loop) return(0);}value[0]=(
KEY(72));
if(value[0]){
say(64,152,0);
 if (loop) return(0);}
say(12,154,94);
say(76,155,95);
 if (loop) return(0);return 0;
}
int p70(void)
{
set('V',76,'c',0,NULL,NULL);
set('V',75,'c',0,NULL,NULL);
value[0]=(value[75]==0);
if(value[0]){
return 0;
}
apport(value[95],value[75]);
say(14,76,95);
loop=1; return(0);
return 0;
}
int p7(void)
{
value[0]=(bitest(evar(95),15));
value[0]&=(bitest(evar(95),16));
if(value[0]){
say(76,120,95);
 if (loop) return(0);}
return 0;
}
int p9(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
flush_command();
say(0,98,0);
value[87] += 1;
value[76]=174;*bitword(76)= -1;
value[76] += value[87];
if (*bitword(87*VARSIZE)==-1) *bitword(76*VARSIZE)= -1;
value[76] += value[87];
if (*bitword(87*VARSIZE)==-1) *bitword(76*VARSIZE)= -1;
say(2,76,0);
value[0]=(query(97)); if (loop>1) return (0);
if(value[0]){
value[76] += 1;
say(2,76,0);
say(0,98,0);
lval[0]=183;lbts[0*VARSIZE]= -1;
value[0]=(value[76]<lval[0]);
if(value[0]){
*bitword(74)= -1; value[74]=FOBJ-1; while (++value[74]<=LOBJ) {
value[0]=(have(value[74],-1,-1));
if(value[0]){
apport(value[74],HERE);
}}
set('V',83,'c',0,NULL,NULL);
move(9,-1);
set('V',93,'c',0,NULL,NULL);
loop=1; return(0);
}}
p21();
if (loop) return (0);
return 0;
}
int p43(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
value[0]=(bitest(evar(78),1));
if(value[0]){
value[0]=(irand(100)<25);
if(value[0]){
say(0,175,0);
p9();
if (loop) return (0);
}
say(64,138,0);
 if (loop) return(0);}value[0]=(
KEY(35));
if(value[0]){
set('L',0,'v',95,lval, lbts);
}else{
set('L',0,'v',94,lval, lbts);
}
say(72,137,lval[0]);
 if (loop) return(0);return 0;
}
int p76(void)
{
bitmod('s',evar(92),8);
return 0;
}
int p31(void)
{
value[0]=(bitest(evar(92),8));
value[0]&=!(KEY(67));
value[0]|=!(bitest(evar(92),7));
if(value[0]){
return 0;
}
set('V',76,'c',0,NULL,NULL);
value[0]=(value[76]==0);
if(value[0]){
return 0;
}
set('V',88,'c',0,NULL,NULL);
value[0]=(query(value[76])); if (loop>1) return (0);
if(value[0]){
say(8,200,20);
value[0]=(query(201)); if (loop>1) return (0);
if(value[0]){
value[76] += 1;
say(2,76,0);
value[86] += 20;
bitmod('c',evar(92),7);
bitmod('c',evar(92),8);
}else{
p76();
if (loop) return (0);
}
}else{
p76();
if (loop) return (0);
}
return 0;
}
int p38(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
if (*bitword(76) == -1) lbts[0*VARSIZE]= -1;lval[0]=value[76]-1; while(++lval[0]<=value[77]) {
say(0,lval[0],0);
value[0]=(lval[0]<value[77]);
if(value[0]){
value[0]=(query(206)); if (loop>1) return (0);
if(!value[0]){
return 0;
}}}
return 0;
}
int p18(void)
{
bitmod('s',evar(78),8);
value[89] = irand(40-30+1)+30;
set('V',90,'v',89,NULL,NULL);
return 0;
}
int p6(void)
{
value[0]=(value[78]==1);
if(value[0]){
default_to(0,value[HERE],10);
value[0]=(value[78]==1);
if(value[0]){
default_to(0,12,10);
value[0]=(value[78]==1);
if(value[0]){
p4();
if (loop) return (0);
}}
}else{
value[0]=(bitest(evar(95),10));
if(!value[0]){
say(76,210,94);
 if (loop) return(0);}}value[0]=(
isnear(value[95],-1,-1));
if(!value[0]){
p4();
if (loop) return (0);
}
return 0;
}
int p28(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
value[0]=(KEY(3));
if(value[0]){
say(64,213,0);
 if (loop) return(0);}value[0]=(
bitest(evar(95),0));
if(value[0]){
value[0]=(have(value[95],-1,-1));
value[0]|=!(bitest(evar(95),3));
if(value[0]){
return 0;
}
set('L',0,'v',83,lval, lbts);
lval[0] -= value[82];
lval[0] *= 5;
lval[0] += 60;
value[0]=(irand(100)<lval[0]);
if(value[0]){
say(12,214,95);
p9();
if (loop) return (0);
}
say(76,215,95);
 if (loop) return(0);}
return 0;
}
int p19(void)
{
   int lval [8];
   short lbts [8];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
   lval[2] = 0;
   lbts [2] = 0;
   lval[3] = 0;
   lbts [3] = 0;
   lval[4] = 0;
   lbts [4] = 0;
   lval[5] = 0;
   lbts [5] = 0;
   lval[6] = 0;
   lbts [6] = 0;
   lval[7] = 0;
   lbts [7] = 0;
value[0]=(KEY(4));
if(value[0]){
set('L',3,'c',1,lval, lbts);
}
lval[2]=12;lbts[2*VARSIZE]= -1;
value[0]=(KEY(46));
if(value[0]){
set('L',2,'v',92,lval, lbts);
}
lbts[0*VARSIZE]= -1; lval[0]=FOBJ-1; while (++lval[0]<=LOBJ) {
set('L',1,'l',0,lval, lbts);
special(32,&lval[1]);
value[0]=(lval[1]==1);
if(value[0]){
value[0]=(anyof(47,32,-1));
if(value[0]){
value[0]=(have(lval[0],-1,-1));
if(!value[0]){
say(0,218,0);
value[0]=(lbitest(0,3,lval,lbts));
if(!value[0]){
say(72,219,lval[0]);
 if (loop) return(0);}value[0]=(
irand(100)<50);
if(value[0]){
say(72,112,lval[0]);
 if (loop) return(0);}
p48(-1,lval[0]);
if (loop) return (0);
}
}else{
value[0]=(have(lval[0],-1,-1));
if(value[0]){
say(72,103,lval[0]);
 if (loop) return(0);}value[0]=(
isnear(lval[0],-1,-1));
if(!value[0]){
say(72,104,lval[0]);
 if (loop) return(0);}}}value[0]=(
getloc(lval[0])==lval[2]);
if(value[0]){
value[0]=(lval[3]==0);
value[0]|=(lbitest(0,5,lval,lbts));
value[0]&=(lbitest(0,3,lval,lbts));
if(value[0]){
value[0]=(lval[1]==1);
if(value[0]){
lval[5] += 1;
}else{
set('L',7,'c',0,lval, lbts);
value[0]=(KEY(47));
value[0]&=(lbitest(0,15,lval,lbts));
if(value[0]){
lval[7]=value[lval[0]];lbts[7*VARSIZE]=lbts[0*VARSIZE];}value[0]=(
lval[7]==16);
if(value[0]){
lval[6] += 1;
}else{
lval[4] += 1;
}}}}}value[0]=(
lval[4]>0);
if(value[0]){
return 0;
}value[0]=(
lval[6]>0);
if(value[0]){
say(64,220,0);
 if (loop) return(0);}value[0]=(
lval[2]==value[92]);
if(value[0]){
value[0]=(lval[5]==0);
if(value[0]){
value[0]=(lval[3]==1);
if(value[0]){
say(72,221,0);
 if (loop) return(0);}
say(72,224,0);
 if (loop) return(0);}value[0]=(
lval[3]==1);
if(value[0]){
say(72,222,0);
 if (loop) return(0);}
say(72,223,0);
 if (loop) return(0);}value[0]=(
lval[5]==0);
if(value[0]){
value[0]=(lval[3]==1);
if(value[0]){
say(72,221,1);
 if (loop) return(0);}
say(72,224,1);
 if (loop) return(0);}value[0]=(
lval[3]==1);
if(value[0]){
say(72,222,1);
 if (loop) return(0);}
say(72,223,1);
 if (loop) return(0);return 0;
}
int p14(int typ0,int par0)
{
   int lval [4];
   short lbts [4];
   lval[0] = par0;
   lbts [0] = typ0;
   lval[1] = 0;
   lbts [1] = 0;
   lval[2] = 0;
   lbts [2] = 0;
   lval[3] = 0;
   lbts [3] = 0;
lbts[1*VARSIZE]= -1; lval[1]=FOBJ-1; while (++lval[1]<=LOBJ) {
if (!isat(lval[1],-1,-1,12)) continue;
value[0]=(lval[0]==0);
value[0]|=(lbitest(1,5,lval,lbts));
if(value[0]){
value[0]=(lbitest(1,15,lval,lbts));
if(value[0]){
lval[3]=value[lval[1]];lbts[3*VARSIZE]=lbts[1*VARSIZE];value[0]=(lval[3]==16);
if(value[0]){
lval[2] += 1;
}else{
return 0;
}
}else{
return 0;
}}}value[0]=(
lval[2]==0);
if(value[0]){
value[0]=(KEY(4));
if(value[0]){
say(72,221,1);
 if (loop) return(0);}
say(72,224,1);
 if (loop) return(0);}
say(64,220,0);
 if (loop) return(0);return 0;
}
int p53(void)
{
value[105] = jrand(3 - 0) + 0;
value[106] = jrand(2 - 0) + 0;
value[132] = jrand(4 - 0) + 0;
value[133] = jrand(5 - 0) + 0;
value[134] = jrand(5 - 0) + 0;
value[135] = jrand(6 - 0) + 0;
value[137] = jrand(6 - 0) + 0;
value[160] = jrand(3 - 0) + 0;
value[170] = jrand(9 - 0) + 0;
return 0;
}
int p39(void)
{
move(9,0,-34); if (loop) return(0);
move(11,0,-11); if (loop) return(0);
return 0;
}
int p78(void)
{
move(9,0,-34); if (loop) return(0);
move(8,0,-8); if (loop) return(0);
return 0;
}
int p65(void)
{
move(10,0,34,10,-28); if (loop) return(0);
value[0]=(KEY(8));
value[0]&=(bitest(evar(79),0));
if(value[0]){
move(8,-2); if (loop) return(0);
}
return 0;
}
int p17(void)
{
move(9,0,-24); if (loop) return(0);
return 0;
}
int p41(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
value[0]=(bitest(evar(78),1));
if(value[0]){
say(64,122,0);
 if (loop) return(0);}value[0]=(
value[78]==1);
if(value[0]){
set('L',0,'c',0,lval, lbts);
value[0]=(bitest(evar(78),3));
if(!value[0]){
bitmod('s',evar(78),4);
set('L',0,'c',1,lval, lbts);
}
p11();
if (loop) return (0);
bitmod('c',evar(78),4);
bitmod('s',evar(92),4);
loop=1; return(0);
}value[0]=(
bitest(evar(95),0));
if(value[0]){
value[0]=(isnear(value[95],-1,-1));
if(!value[0]){
say(76,104,95);
 if (loop) return(0);}
}else{
value[0]=(bitest(evar(95),1));
if(value[0]){
value[0]=(value[HERE]==value[95]);
if(!value[0]){
say(64,162,0);
 if (loop) return(0);}
}else{
value[0]=(bitest(evar(95),2));
if(value[0]){
say(64,107,0);
 if (loop) return(0);}else{
say(64,129,0);
 if (loop) return(0);}}}
say(34,95,0);
bitmod('s',evar(95),4);
loop=1; return(0);
return 0;
}
int p42(void)
{
say(64,108,0);
 if (loop) return(0);return 0;
}
int p54(void)
{
value[0]=(value[78]==1);
if(value[0]){
return 0;
}value[0]=(
bitest(evar(95),19));
if(!value[0]){
return 0;
}
return 0;
}
int p52(void)
{
value[0]=(query(212)); if (loop>1) return (0);
if(value[0]){
value[86] += 10;
p21();
if (loop) return (0);
}
say(64,99,0);
 if (loop) return(0);return 0;
}
int p24(void)
{
value[0]=(value[78]==1);
if(value[0]){
default_to(0,value[HERE],0);
value[0]=(value[78]==1);
value[0]&=(bitest(evar(78),1));
if(value[0]){
say(64,213,0);
 if (loop) return(0);}}value[0]=(
KEY(64));
if(value[0]){
(*procs[64])();
if (loop) return (0);
}value[0]=(
KEY(63));
if(value[0]){
(*procs[63])();
if (loop) return (0);
}value[0]=(
bitest(evar(78),1));
if(value[0]){
p28();
if (loop) return (0);
}value[0]=(
KEY(3));
if(value[0]){
default_to(1,value[92],3);
say(64,105,0);
 if (loop) return(0);}value[0]=(
isnear(value[95],-1,-1));
if(value[0]){
value[0]=(have(value[95],-1,-1));
if(value[0]){
say(76,123,95);
 if (loop) return(0);}
}else{
say(76,104,95);
 if (loop) return(0);}value[0]=(
bitest(evar(95),3));
if(!value[0]){
say(64,102,0);
 if (loop) return(0);}
set('V',74,'v',95,NULL,NULL);
p25(*bitword(95),value[95],0,1);
if (loop) return (0);
return 0;
}
int p13(void)
{
value[0]=(value[78]==1);
if(value[0]){
default_to(0,12,-1);
value[0]=(value[78]==1);
if(value[0]){
return 0;
}}value[0]=(
KEY(3));
if(value[0]){
default_to(1,12,-1);
}value[0]=(
bitest(evar(95),0));
if(!value[0]){
return 0;
}value[0]=(
have(value[95],-1,-1));
if(value[0]){
p7();
if (loop) return (0);
p15(*bitword(95),value[95],0,1);
if (loop) return (0);
}else{
say(76,112,95);
 if (loop) return(0);}
return 0;
}
int p68(void)
{
value[0]=(value[78]==2);
if(value[0]){
value[0]=(bitest(evar(95),0));
if(value[0]){
value[0]=(have(value[95],-1,-1));
value[0]&=(bitest(evar(92),9));
if(value[0]){
p7();
if (loop) return (0);
p70();
if (loop) return (0);
}}}
(*procs[47])();
if (loop) return (0);
return 0;
}
int p35(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
set('L',0,'c',0,lval, lbts);
*bitword(74)= -1; value[74]=FOBJ-1; while (++value[74]<=LOBJ) {
value[0]=(have(value[74],-1,-1));
if(value[0]){
value[0]=(lval[0]==0);
if(value[0]){
say(0,109,0);
}
say(2,74,0);
value[0]=(bitest(evar(74),15));
if(value[0]){
value[0]=(bitest(evar(74),16));
if(value[0]){
say(0,111,0);
}else{
say(0,98,0);
}}
lval[0] += 1;
}}value[0]=(
lval[0]==0);
if(value[0]){
say(0,110,0);
}
loop=1; return(0);
return 0;
}
int p55(void)
{
value[0]=(value[78]==1);
if(value[0]){
default_to(0,12,16);
value[0]=(value[78]==1);
if(value[0]){
say(64,124,0);
 if (loop) return(0);}}value[0]=(
isnear(value[95],-1,-1));
if(value[0]){
value[0]=(have(value[95],-1,-1));
value[0]&=(bitest(evar(95),16));
if(!value[0]){
say(76,125,95);
 if (loop) return(0);}
set('V',74,'v',95,NULL,NULL);
p25(*bitword(95),value[95],0,1);
if (loop) return (0);
bitmod('c',evar(95),16);
}
return 0;
}
int p74(void)
{
value[0]=(value[78]==1);
if(value[0]){
default_to(0,12,15);
value[0]=(value[78]==1);
if(value[0]){
say(64,127,0);
 if (loop) return(0);}
}else{
value[0]=(isnear(value[95],-1,-1));
if(!value[0]){
return 0;
}value[0]=(
bitest(evar(95),15));
if(!value[0]){
say(76,128,95);
 if (loop) return(0);}value[0]=(
have(value[95],-1,-1));
if(!value[0]){
value[0]=(bitest(evar(95),3));
if(!value[0]){
say(64,129,0);
 if (loop) return(0);}
set('V',74,'v',95,NULL,NULL);
p25(*bitword(95),value[95],0,0);
if (loop) return (0);
}}
bitmod('s',evar(95),16);
value[83] -= 1;
value[0]=(bitest(evar(95),13));
if(value[0]){
value[95] -= 1;
}
say(0,101,0);
return 0;
}
int p59(void)
{
p26();
if (loop) return (0);
value[84] -= 10;
value[0]=(value[84]<0);
if(value[0]){
set('V',84,'c',0,NULL,NULL);
}
say(12,115,84);
say(12,116,85);
say(12,117,80);
loop=1; return(0);
return 0;
}
int p66(void)
{
say(0,99,0);
say(64,160,0);
 if (loop) return(0);return 0;
}
int p77(void)
{
value[0]=(irand(100)<30);
if(value[0]){
say(64,150,0);
 if (loop) return(0);}value[0]=(
irand(100)<50);
if(value[0]){
say(64,151,0);
 if (loop) return(0);}
say(64,153,0);
 if (loop) return(0);return 0;
}
int p33(void)
{
say(64,140,0);
 if (loop) return(0);return 0;
}
int p50(void)
{
say(64,140,0);
 if (loop) return(0);return 0;
}
int p67(void)
{
bitmod('c',evar(78),2);
bitmod('s',evar(78),3);
say(0,164,0);
loop=1; return(0);
return 0;
}
int p44(void)
{
bitmod('s',evar(78),2);
bitmod('c',evar(78),3);
say(64,163,0);
 if (loop) return(0);return 0;
}
int p72(void)
{
bitmod('c',evar(78),2);
bitmod('c',evar(78),3);
say(0,165,0);
say(0,98,0);
bitmod('s',evar(78),4);
p11();
if (loop) return (0);
bitmod('c',evar(78),4);
loop=1; return(0);
return 0;
}
int p23(void)
{
say(64,170,0);
 if (loop) return(0);return 0;
}
int p37(void)
{
say(64,167,0);
 if (loop) return(0);return 0;
}
int p60(void)
{
say(64,168,0);
 if (loop) return(0);return 0;
}
int p61(void)
{
say(64,169,0);
 if (loop) return(0);return 0;
}
int p73(void)
{
say(64,166,0);
 if (loop) return(0);return 0;
}
int p27(void)
{
value[0]=(value[78]==1);
if(value[0]){
say(76,171,94);
 if (loop) return(0);}value[0]=(
21<=value[94] && value[94]<=30);
value[0]|=(21<=value[95] && value[95]<=30);
value[0]|=(40<=value[95] && value[95]<=41);
value[0]|=(KEY(31));
value[0]|=(KEY(32));
value[0]|=(KEY(37));
value[0]|=(KEY(34));
value[0]|=(KEY(33));
if(value[0]){
if (value[95]<LPROC && value[95]>= 0) (*procs[value[95]])(); else pcall(value[95]);
if (loop) return (0);
}else{
value[0]=(bitest(evar(95),1));
if(value[0]){
value[0]=(value[HERE]==value[95]);
if(value[0]){
say(64,142,0);
 if (loop) return(0);}
say(64,141,0);
 if (loop) return(0);}value[0]=(
bitest(evar(95),9));
if(value[0]){
value[0]=(isnear(value[95],-1,-1));
if(value[0]){
say(76,172,95);
 if (loop) return(0);}
say(76,104,95);
 if (loop) return(0);}
say(64,173,0);
 if (loop) return(0);}
return 0;
}
int p45(void)
{
p43();
if (loop) return (0);
return 0;
}
int p62(void)
{
p43();
if (loop) return (0);
return 0;
}
int p69(void)
{
p43();
if (loop) return (0);
return 0;
}
int p12(void)
{
p43();
if (loop) return (0);
return 0;
}
int p16(void)
{
p43();
if (loop) return (0);
return 0;
}
int p75(void)
{
p43();
if (loop) return (0);
return 0;
}
int p46(void)
{
p43();
if (loop) return (0);
return 0;
}
int p47(void)
{
p43();
if (loop) return (0);
return 0;
}
int p63(void)
{
p43();
if (loop) return (0);
return 0;
}
int p64(void)
{
p43();
if (loop) return (0);
return 0;
}
int p20(void)
{
value[0]=(value[78]>1);
if(value[0]){
value[0]=(bitest(evar(95),0));
if(value[0]){
value[0]=(bitest(evar(79),0));
if(value[0]){
value[0]=(have(value[95],-1,-1));
if(value[0]){
say(76,103,95);
 if (loop) return(0);}
value[75]=getloc(value[95]);*bitword(75)= -1;
move(value[75],-2); if (loop) return(0);
}value[0]=(
isnear(value[95],-1,-1));
if(value[0]){
value[0]=(have(value[95],-1,-1));
if(value[0]){
say(64,144,0);
 if (loop) return(0);}
say(64,145,0);
 if (loop) return(0);}
say(64,143,0);
 if (loop) return(0);}value[0]=(
bitest(evar(95),1));
if(value[0]){
value[0]=(value[HERE]==value[95]);
if(value[0]){
say(64,146,0);
 if (loop) return(0);}
say(64,143,0);
 if (loop) return(0);}
say(64,136,0);
 if (loop) return(0);}
return 0;
}
int p3(void)
{
value[0]=(bitest(evar(92),5));
value[0]|=(bitest(evar(93),5));
value[0]|=(value[93]==0);
if(value[0]){
say(64,174,0);
 if (loop) return(0);}
move(value[93],-2); if (loop) return(0);
return 0;
}
int p71(void)
{
say(64,186,0);
 if (loop) return(0);return 0;
}
int p58(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
value[0]=(0>0);
value[0]&=!(bitest(evar(79),0));
if(value[0]){
say(8,188,0);
value[0]=(query(187)); if (loop>1) return (0);
if(!value[0]){
set('L',0,'c',0,lval, lbts);
}}value[0]=(
lval[0]==0);
if(value[0]){
say(64,99,0);
 if (loop) return(0);}
special(1,&lval[0]);
value[0]=(lval[0]==0);
if(value[0]){
value[0]=(bitest(evar(79),0));
if(value[0]){
value[0]=(query(193)); if (loop>1) return (0);
if(value[0]){
say(0,99,0);
say(64,98,0);
 if (loop) return(0);}}
say(0,99,0);
say(0,98,0);
finita(); loop=1; return(0);
}else{
say(64,189,0);
 if (loop) return(0);}
return 0;
}
int p57(void)
{
   int lval [3];
   short lbts [3];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
   lval[2] = 0;
   lbts [2] = 0;
value[0]=(bitest(evar(79),0));
if(value[0]){
set('L',0,'c',1,lval, lbts);
}else{
set('L',0,'c',0,lval, lbts);
}
special(2,&lval[2]);
value[0]=(lval[2]==0);
if(value[0]){
value[0]=(lval[0]==1);
if(value[0]){
bitmod('s',evar(79),0);
}else{
bitmod('c',evar(79),0);
}
special(8,&lval[1]);
value[0]=(bitest(evar(79),0));
value[0]|=(lval[1]>0);
if(value[0]){
value[80] -= 1;
value[0]=(query(192)); if (loop>1) return (0);
if(!value[0]){
special(3,&lval[2]);
}
move(value[92],-1);
say(0,99,0);
say(0,98,0);
}else{
say(8,194,0);
say(0,98,0);
finita(); loop=1; return(0);
}
}else{
value[0]=(lval[2]==1);
if(value[0]){
say(0,190,0);
value[80] -= 1;
}else{
value[0]=(query(191)); if (loop>1) return (0);
if(value[0]){
special(3,&lval[2]);
}
say(0,99,0);
}}
loop=1; return(0);
return 0;
}
int p56(void)
{
value[0]=(value[78]>1);
if(value[0]){
(*procs[16])();
if (loop) return (0);
}value[0]=(
bitest(evar(92),10));
if(value[0]){
say(64,185,0);
 if (loop) return(0);}
say(64,184,0);
 if (loop) return(0);return 0;
}
int p32(void)
{
say(64,195,0);
 if (loop) return(0);return 0;
}
int p22(void)
{
value[0]=(value[78]==1);
if(value[0]){
say(76,171,94);
 if (loop) return(0);}else{
if (value[95]<LPROC && value[95]>= 0) (*procs[value[95]])(); else pcall(value[95]);
if (loop) return (0);
loop=1; return(0);
}
return 0;
}
int p29(void)
{
value[0]=(value[88]==0);
if(value[0]){
set('V',88,'c',1,NULL,NULL);
}value[0]=(
bitest(evar(92),8));
if(!value[0]){
say(64,199,0);
 if (loop) return(0);}
p31();
if (loop) return (0);
value[0]=(value[88]>0);
if(value[0]){
value[0]=(bitest(evar(88),0));
if(value[0]){
say(0,198,0);
}else{
value[0]=(bitest(evar(88),1));
if(value[0]){
say(0,199,0);
}else{
bitmod('s',evar(88),1);
value[76]=196;*bitword(76)= -1;
value[77]=197;*bitword(77)= -1;
p38();
if (loop) return (0);
}}}
loop=1; return(0);
return 0;
}
int p34(void)
{
value[76]=202;*bitword(76)= -1;
value[77]=205;*bitword(77)= -1;
p38();
if (loop) return (0);
loop=1; return(0);
return 0;
}
int p49(void)
{
p6();
if (loop) return (0);
value[0]=(value[95]>1);
if(value[0]){
say(76,207,95);
 if (loop) return(0);}value[0]=(
value[95]==0);
if(value[0]){
say(76,209,95);
 if (loop) return(0);}
set('V',95,'c',3,NULL,NULL);
say(0,101,0);
return 0;
}
int p8(void)
{
p6();
if (loop) return (0);
value[0]=(value[95]<3);
if(value[0]){
say(76,208,95);
 if (loop) return(0);}
set('V',95,'c',1,NULL,NULL);
say(0,101,0);
return 0;
}
int p10(void)
{
say(64,129,0);
 if (loop) return(0);return 0;
}
int p1(void)
{
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
say(0,98,0);
*bitword(74)= -1; value[74]=FOBJ-1; while (++value[74]<=LOBJ) {
apport(value[74],8);
}
bitmod('s',6,3);
bitmod('s',7,3);
bitmod('s',6,21);
bitmod('s',7,21);
bitmod('s',7,5);
apport(6,9);
apport(7,10);
bitmod('s',3,5);
bitmod('s',3,20);
bitmod('s',3,8);
bitmod('s',3,10);
bitmod('s',3,11);
bitmod('s',3,4);
bitmod('s',3,7);
lbts[0*VARSIZE]= -1; lval[0]=7; while (++lval[0]<=11) {
lbitmod(1,'s',0,3,lval,lbts);
}
set('V',82,'c',7,NULL,NULL);
p53();
if (loop) return (0);
move(9,-2); if (loop) return(0);
say(0,100,0);
return 0;
}
int p2(void)
{
value[80] += 1;
p36();
if (loop) return (0);
value[0]=(bitest(evar(78),0));
if(value[0]){
bitmod('c',evar(78),0);
value[0]=(bitest(evar(78),1));
if(!value[0]){
p11();
if (loop) return (0);
}
value[81] += 1;
}value[0]=(
value[89]<1);
if(value[0]){
p18();
if (loop) return (0);
}else{
value[0]=(bitest(evar(92),7));
if(value[0]){
value[88] += 1;
value[0]=(value[88]>25);
if(value[0]){
p31();
if (loop) return (0);
}
}else{
set('V',88,'c',0,NULL,NULL);
}}value[0]=(
bitest(evar(78),7));
if(value[0]){
bitmod('c',evar(78),7);
set('V',83,'c',0,NULL,NULL);
*bitword(74)= -1; value[74]=FOBJ-1; while (++value[74]<=LOBJ) {
value[0]=(have(value[74],-1,-1));
if(value[0]){
value[0]=(bitest(evar(74),12));
value[0]|=(bitest(evar(74),16));
if(!value[0]){
value[83] += 1;
value[0]=(bitest(evar(74),13));
if(value[0]){
value[83] += 1;
}}}}}
input(0);
if (loop) return(0);
value[0]=(value[78]==0);
if(value[0]){
loop=1; return(0);
}value[0]=(
KEY(15));
if(value[0]){
(*procs[15])();
if (loop) return (0);
}value[0]=(
value[78]==1);
if(value[0]){
value[0]=(KEY(46));
if(value[0]){
default_to(0,value[92],3);
}else{value[0]=(KEY(47));
if(value[0]){
default_to(0,12,-1);
}}
}else{value[0]=(anyof(3,4,-1));
if(value[0]){
value[0]=(value[96]==-6);
if(value[0]){
say(76,216,96);
 if (loop) return(0);}value[0]=(
value[96]==-3);
if(value[0]){
say(76,132,96);
 if (loop) return(0);}value[0]=(
value[96]==-2);
if(value[0]){
flush_command();
say(76,135,96);
 if (loop) return(0);}value[0]=(
value[96]==-4);
if(value[0]){
say(76,217,96);
 if (loop) return(0);}value[0]=(
anyof(47,32,-1));
if(value[0]){
p19();
if (loop) return (0);
p14(0,0);
if (loop) return (0);
default_to(1,12,-1);
}else{value[0]=(KEY(46));
if(value[0]){
value[0]=(bitest(evar(78),1));
if(!value[0]){
p19();
if (loop) return (0);
default_to(1,value[92],3);
}else{
say(72,213,1);
 if (loop) return(0);}}}
}else{value[0]=(value[95]>=0);
value[0]&=(bitest(evar(95),0));
if(value[0]){
set('E',5,'v',95,NULL,NULL);
}}}value[0]=(
value[94]==-2);
value[0]|=(value[94]==-3);
if(value[0]){
value[0]=(value[94]==-2);
if(value[0]){
say(76,134,94);
 if (loop) return(0);}else{
say(76,132,94);
 if (loop) return(0);}}value[0]=(
KEY(19));
if(value[0]){
p51();
if (loop) return (0);
}value[0]=(
KEY(3));
if(value[0]){
p5();
if (loop) return (0);
}value[0]=(
value[78]>1);
if(value[0]){
value[0]=(value[95]==-2);
value[0]|=(value[95]==-3);
value[0]&=!(13<=value[94] && value[94]<=20);
if(value[0]){
value[0]=(value[95]==-3);
if(value[0]){
say(76,132,95);
 if (loop) return(0);}else{
say(76,135,95);
 if (loop) return(0);}}}value[0]=(
KEY(28));
value[0]&=(KEY(35));
if(value[0]){
value[91] += 1;
value[0]=(value[91]==5);
if(value[0]){
value[0]=(value[94]==35);
if(value[0]){
say(12,157,94);
}else{
say(12,157,95);
}}}value[0]=(
KEY(32));
value[0]&=(value[78]>1);
if(value[0]){
value[0]=(bitest(evar(95),0));
value[0]&=(bitest(evar(95),3));
if(value[0]){
say(64,159,0);
 if (loop) return(0);}}value[0]=(
KEY(19));
value[0]&=(value[78]>1);
if(!value[0]){
if (value[92]<LPROC && value[92]>= 0) (*procs[value[92]])(); else pcall(value[92]);
if (loop) return (0);
}value[0]=(
bitest(evar(94),1));
if(value[0]){
value[0]=(value[HERE]==value[94]);
if(value[0]){
say(0,146,0);
}else{
say(0,141,0);
}
}else{
value[0]=(KEY(72));
if(value[0]){
say(64,139,0);
 if (loop) return(0);}
if (value[94]<LPROC && value[94]>= 0) (*procs[value[94]])(); else pcall(value[94]);
if (loop) return (0);
value[0]=(bitest(evar(94),0));
if(value[0]){
value[0]=(isnear(value[94],-1,-1));
if(value[0]){
bitmod('s',evar(78),6);
say(76,131,94);
 if (loop) return(0);}else{
say(12,104,94);
}
}else{
p4();
if (loop) return (0);
}}
loop=1; return(0);
return 0;
}
