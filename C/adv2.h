/* adv2.h: Skeleton Adventure - copyright Mike Arnautov 2018. Licensed under
 * GPL (version 3 or later) or the Modified BSD Licence, whichever
 * is asserted by the supplied LICENCE file.*/

short voc_refno[] = {
  14,   67,    0,   58,   31,   39,   14,    3,    0,    0,   31, 
   0,   37,   60,   70,   58,   46,   19,   49,    7,   36,   39, 
  32,   32,   57,   65,   55,   32,   32,   47,   47,   24,   24, 
  10,   33,    3,   57,   34,   35,   59,   55,   58,   35,   36, 
  70,   61,   46,   46,   35,   46,   67,    5,    5,   67,   62, 
  50,   46,   54,   64,   33,   68,   68,   33,   64,   33,    5, 
  64,   64,   38,   46,   50,   57,   38,   34,   72,    8,   64, 
  58,   16,   55,   49,   58,   57,   19,   22,   23,   66,   60, 
  22,   23,   29,   29,    5,   36,   48,   34,   34,   34,   39, 
  15,   70,   35,   58,   58,   14,   53,   47,   52,   14,   17, 
  16,   37,   37,   72,    0,   35,   26,   15,   19,   63,   63, 
  69,   70,   25,   70,   19,   49,   19,   18,   26,   25,   27, 
   9,   58,   50,   15,   27,   71,   46,   46,   59,   54,   18, 
   0,    0,    5,    6,    0,   54,    0,   54,   46,    4,   35, 
   4,   35,   31,   48,   31,   31,   70,   73,   19,    4,   61, 
  65,   28,   35,   70,   51,   28,   55,    0,   65,   57,   66, 
  66,   11,    0};
short voc_type[] = {
   2,    2,   19,    2,    2,    2,    2,    0,   19,   19,    2, 
  19,    2,    2,    2,    2,    2,    2,    2,    0,    2,    2, 
   2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2, 
   1,    2,    0,    2,    2,    2,    2,    2,    2,    2,    2, 
   2,    2,    2,    2,    2,    2,    2,    0,    0,    2,    2, 
   2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    0, 
   2,    2,    2,    2,    2,    2,    2,    2,    2,    1,    2, 
   2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2, 
   2,    2,    2,    2,    0,    2,    2,    2,    2,    2,    2, 
   2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2, 
   2,    2,    2,    2,   19,    2,    2,    2,    2,    2,    2, 
   2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2, 
   1,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2, 
  19,   19,    0,    0,   19,    2,   19,    2,    2,    0,    2, 
   0,    2,    2,    2,    2,    2,    2,    2,    2,    0,    2, 
   2,    2,    2,    2,    2,    2,    2,   19,    2,    2,    2, 
   2,    1,    0};
int voc_addr[] = {
   18696L,    19447L,    18652L,    19284L,    18877L,    19077L,    18683L, 
   18556L,    18654L,    18644L,    18883L,    18670L,    19041L,    19334L, 
   19512L,    19302L,    19117L,    18753L,    19156L,    18612L,    19025L, 
   19071L,    18895L,    18907L,    19268L,    19422L,    19235L,    18890L, 
   18897L,    19133L,    19128L,    18809L,    18804L,    18629L,    18932L, 
   18545L,    19258L,    18959L,    18997L,    19322L,    19224L,    19295L, 
   19005L,    19017L,    19478L,    19348L,    19093L,    19089L,    18970L, 
   19107L,    19442L,    18601L,    18597L,    19449L,    19353L,    19172L, 
   19112L,    19219L,    19380L,    18915L,    19454L,    19459L,    18925L, 
   19370L,    18918L,    18582L,    19382L,    19392L,    19061L,    19102L, 
   19183L,    19256L,    19066L,    18964L,    19525L,    18617L,    19400L, 
   19313L,    18726L,    19244L,    19162L,    19306L,    19251L,    18770L, 
   18789L,    18801L,    19439L,    19327L,    18783L,    18791L,    18852L, 
   18862L,    18585L,    19034L,    19144L,    18938L,    18950L,    18942L, 
   19084L,    18712L,    19483L,    18989L,    19282L,    19277L,    18697L, 
   19200L,    19136L,    19193L,    18689L,    18731L,    18718L,    19053L, 
   19046L,    19530L,    18678L,    18978L,    18830L,    18699L,    18749L, 
   19367L,    19361L,    19471L,    19488L,    18821L,    19494L,    18777L, 
   19167L,    18759L,    18736L,    18824L,    18811L,    18832L,    18623L, 
   19290L,    19176L,    18704L,    18842L,    19519L,    19100L,    19095L, 
   19316L,    19211L,    18742L,    18657L,    18648L,    18592L,    18605L, 
   18662L,    19205L,    18667L,    19214L,    19123L,    18569L,    18982L, 
   18560L,    19012L,    18868L,    19149L,    18865L,    18870L,    19499L, 
   19536L,    18764L,    18572L,    19340L,    19405L,    18850L,    18973L, 
   19507L,    19188L,    18845L,    19229L,    18673L,    19416L,    19266L, 
   19437L,    19433L,    18639L,    0};
int voc_word[] = {
   18689L,    19442L,    18652L,    19284L,    18877L,    19077L,    18683L, 
   18545L,    18654L,    18644L,    18883L,    18670L,    19041L,    19334L, 
   19512L,    19302L,    19117L,    18753L,    19156L,    18612L,    19025L, 
   19071L,    18890L,    18907L,    19268L,    19422L,    19235L,    18890L, 
   18897L,    19128L,    19128L,    18804L,    18804L,    18629L,    18932L, 
   18545L,    19258L,    18959L,    18997L,    19322L,    19224L,    19295L, 
   19005L,    19017L,    19478L,    19348L,    19089L,    19089L,    18970L, 
   19107L,    19442L,    18601L,    18597L,    19449L,    19353L,    19172L, 
   19112L,    19219L,    19370L,    18915L,    19454L,    19459L,    18925L, 
   19370L,    18918L,    18582L,    19382L,    19392L,    19061L,    19102L, 
   19183L,    19251L,    19066L,    18964L,    19525L,    18617L,    19400L, 
   19306L,    18726L,    19244L,    19162L,    19306L,    19251L,    18770L, 
   18783L,    18791L,    19439L,    19327L,    18783L,    18791L,    18852L, 
   18852L,    18585L,    19034L,    19144L,    18938L,    18950L,    18942L, 
   19084L,    18712L,    19483L,    18989L,    19277L,    19277L,    18697L, 
   19200L,    19136L,    19193L,    18689L,    18731L,    18718L,    19053L, 
   19046L,    19530L,    18678L,    18978L,    18824L,    18699L,    18749L, 
   19361L,    19361L,    19471L,    19488L,    18811L,    19494L,    18777L, 
   19167L,    18759L,    18736L,    18824L,    18811L,    18832L,    18623L, 
   19290L,    19176L,    18704L,    18832L,    19519L,    19095L,    19095L, 
   19316L,    19205L,    18742L,    18657L,    18648L,    18592L,    18605L, 
   18662L,    19205L,    18667L,    19214L,    19123L,    18560L,    18982L, 
   18560L,    19012L,    18865L,    19149L,    18865L,    18870L,    19499L, 
   19536L,    18764L,    18572L,    19340L,    19405L,    18845L,    18973L, 
   19507L,    19188L,    18845L,    19229L,    18673L,    19416L,    19258L, 
   19433L,    19433L,    18639L,    0};