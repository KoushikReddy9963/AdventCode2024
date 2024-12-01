// Author :  Y sai koushik redddy
// date&time:  2024-12-01 11:00:00
// Event : Advent of code 2024
#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define all(x) x.begin(), x.end()
int32_t main()
{
    vector<int> a, b;
    string inputs;
    unordered_set<int> s2;
    while (getline(cin, inputs))
    {
        stringstream ss(inputs);
        int x, y;
        ss >> x >> y;
        a.push_back(x);
        s2.insert(x);
        b.push_back(y);
    }
    sort(all(a));
    sort(all(b));
    int ans1 = 0;
    int i = 0;
    for (auto &x : a)
    {
        ans1 += abs(x - b[i++]);
    }
    int ans2 = 0;
    for (int &x : b)
    {
        if (s2.find(x) == s2.end())
        {
            continue;
        }
        ans2 += x;
    }
    cout << ans1 << " " << ans2 << endl;

    return 0;
}

// input :
// 15131   78158
// 32438   35057
// 12503   57702
// 73808   43128
// 57168   71761
// 97870   29344
// 18072   79079
// 55097   92997
// 36615   67927
// 63626   85851
// 19535   91599
// 20386   53482
// 32817   55364
// 90111   84813
// 81180   13958
// 20278   82963
// 71822   70030
// 36650   74064
// 96658   93643
// 48953   12223
// 87910   32104
// 15586   46936
// 59112   47057
// 36552   32104
// 54311   15545
// 14521   35085
// 46924   41818
// 79287   17659
// 91525   46171
// 77523   63000
// 14229   61327
// 20514   77151
// 30019   35029
// 78834   57168
// 96186   92129
// 99772   60459
// 62659   23209
// 44811   97907
// 41778   46924
// 39724   54539
// 56672   11103
// 37872   44088
// 67848   46924
// 55337   58014
// 48137   34267
// 57761   47261
// 90770   82701
// 87830   32104
// 14118   43916
// 64511   97016
// 67927   26386
// 76032   55621
// 46116   43948
// 96284   26386
// 51398   32104
// 52363   45099
// 84966   24105
// 29725   47057
// 92179   73851
// 77151   57702
// 31670   23131
// 83560   34930
// 62543   62129
// 88635   55364
// 14456   87507
// 62848   35057
// 31081   15535
// 20287   11590
// 58199   55876
// 78634   63263
// 21931   62559
// 96294   23071
// 18891   21157
// 54875   35057
// 40666   75460
// 68475   71547
// 93112   57702
// 17780   50710
// 89025   82701
// 10487   77363
// 14442   67828
// 18287   10668
// 73030   47436
// 88998   81809
// 47512   43866
// 49438   52980
// 62202   13958
// 42062   33002
// 35797   54746
// 61308   74313
// 98706   85679
// 51049   29787
// 96082   47057
// 82102   77395
// 91642   37908
// 86709   16527
// 11536   39339
// 57804   77151
// 58098   58014
// 29840   37272
// 68500   77570
// 18840   17486
// 42529   62129
// 74868   62855
// 48556   44088
// 64424   35057
// 87547   70030
// 25349   55364
// 24698   95115
// 29610   37403
// 10024   93643
// 80179   44088
// 86009   67277
// 75396   28216
// 18309   37500
// 14754   67927
// 98264   13958
// 28294   77151
// 50417   96240
// 27171   12050
// 79907   32187
// 94597   73714
// 36251   58014
// 42293   43948
// 22552   46924
// 18765   85646
// 65758   37771
// 16028   74814
// 15096   32104
// 27990   62738
// 91867   23131
// 48177   62129
// 43833   67927
// 91992   96240
// 25767   58014
// 56422   35328
// 39281   87024
// 85701   70030
// 40915   95206
// 25378   23022
// 17827   44745
// 74880   31126
// 51583   56967
// 14996   82701
// 24393   64040
// 13557   31621
// 87102   77151
// 57922   50349
// 18436   82701
// 36961   68507
// 33558   18947
// 29752   24528
// 88141   99508
// 65521   66940
// 98636   24754
// 83809   23131
// 13839   85851
// 81470   35057
// 93818   69550
// 72210   82295
// 10853   84284
// 78121   55200
// 28208   85199
// 75892   13111
// 62655   18720
// 59696   86838
// 18410   26693
// 82521   30547
// 68047   85199
// 59444   62129
// 73400   82753
// 52751   25250
// 94229   67927
// 44728   45424
// 84688   47457
// 54885   53247
// 66708   85987
// 16610   19000
// 52212   47057
// 33467   90494
// 11933   34797
// 11426   23370
// 98122   11318
// 24974   98740
// 89866   61735
// 63042   84601
// 97878   62129
// 86324   88329
// 93550   65587
// 21893   32872
// 32422   82701
// 97593   95724
// 79956   43017
// 18574   66940
// 69417   70030
// 20527   62986
// 32901   78479
// 76892   14216
// 80784   20119
// 70030   46924
// 45455   19210
// 84089   55364
// 51290   32104
// 78084   35819
// 19446   43664
// 83281   82701
// 88850   60032
// 41737   26655
// 28334   87060
// 57007   63359
// 35230   79052
// 97142   62408
// 71663   44088
// 21967   56111
// 73266   70030
// 37751   73992
// 71909   10908
// 49256   76543
// 87879   10005
// 18958   99715
// 33674   26386
// 88578   16115
// 38184   92129
// 23162   94507
// 94689   27138
// 50188   23236
// 73498   92740
// 80946   14521
// 20434   62129
// 96199   54539
// 97269   74914
// 75164   56409
// 63802   46857
// 85851   39471
// 13886   21128
// 82608   43875
// 47631   35057
// 41955   83525
// 41722   49739
// 80210   73310
// 72032   29229
// 99588   19663
// 75340   68873
// 72016   64274
// 87488   54539
// 54539   89609
// 92646   49227
// 92493   92129
// 51219   62129
// 94294   66940
// 35339   82701
// 60625   25516
// 71044   38554
// 65428   57974
// 47057   38596
// 79756   64175
// 25694   69619
// 96457   13207
// 13870   77151
// 61984   33464
// 14480   55364
// 31924   14216
// 33548   35819
// 66463   52868
// 36209   21830
// 38146   62515
// 43109   93643
// 39326   73266
// 67802   83861
// 80246   93894
// 32312   70030
// 67288   20405
// 11591   84936
// 17019   49240
// 45637   58014
// 63060   82442
// 96782   87050
// 49139   57325
// 13278   38425
// 10622   58014
// 70609   55364
// 37494   57385
// 50253   77151
// 30770   88060
// 48235   27041
// 77045   46924
// 36713   60284
// 36647   73266
// 21913   37190
// 84907   76623
// 83140   58014
// 40049   38908
// 96240   49588
// 91375   20178
// 44851   53224
// 85957   77812
// 31141   62129
// 73469   75003
// 54379   73141
// 90253   26386
// 37361   83861
// 77965   86183
// 44088   98740
// 65748   44088
// 92167   27474
// 34050   39710
// 53845   35057
// 39439   70030
// 56254   80666
// 81736   35057
// 22481   41619
// 94515   47057
// 40865   47438
// 94090   94307
// 25243   99699
// 70472   44088
// 92113   36000
// 84122   44088
// 75877   47057
// 46967   98088
// 89199   62129
// 45284   61031
// 25894   24258
// 81546   49603
// 18098   62129
// 35845   58264
// 30136   84643
// 79351   85199
// 91114   29608
// 10796   73266
// 80157   13958
// 13776   34799
// 32867   82701
// 72659   83316
// 70346   32104
// 82707   26071
// 93643   88453
// 56487   73266
// 17461   80601
// 74189   35819
// 89473   80231
// 89648   29082
// 21185   91451
// 45756   24922
// 13958   92570
// 49766   46924
// 71014   15764
// 78218   47624
// 36683   52276
// 12805   18935
// 89940   75569
// 92619   62002
// 26109   85199
// 85199   47057
// 74790   77094
// 61077   44984
// 21011   24325
// 91299   35819
// 13145   92130
// 74616   25253
// 68242   57168
// 88099   29422
// 98816   50970
// 92627   32104
// 60619   54539
// 18592   99696
// 97961   85199
// 37971   86471
// 76808   65290
// 26960   44025
// 21159   18065
// 21820   51610
// 87396   13958
// 51739   69215
// 36150   67927
// 36428   77167
// 81368   85546
// 36684   74331
// 87943   57127
// 83934   39052
// 93369   57168
// 25759   23805
// 90295   85638
// 33748   35057
// 23965   56026
// 18136   47566
// 97136   87779
// 11751   98740
// 77584   72651
// 47535   14216
// 35157   40935
// 38666   20886
// 49584   34431
// 70553   57619
// 41660   90498
// 34861   70030
// 97329   82739
// 83411   32104
// 74970   72228
// 36340   26425
// 40870   92129
// 96019   35057
// 35996   62535
// 35750   17289
// 44648   26386
// 14216   68378
// 41202   76995
// 28670   44197
// 12646   99599
// 30412   91461
// 18596   74757
// 38836   73266
// 63846   70555
// 84175   23131
// 36177   25567
// 76440   41764
// 89469   30895
// 28950   43948
// 93707   70030
// 93976   73909
// 15262   31486
// 86652   23131
// 65454   88787
// 76119   46924
// 44343   98685
// 29424   46693
// 97543   32104
// 73497   76030
// 87093   58014
// 49551   16528
// 45191   73266
// 21283   34339
// 27141   73266
// 20255   57702
// 48823   35838
// 74136   57964
// 18194   80112
// 37794   96240
// 46775   98740
// 52309   42291
// 12317   39213
// 98269   96240
// 82747   89172
// 28972   54579
// 40842   85851
// 24862   46924
// 90115   29514
// 97189   85851
// 60429   85233
// 35563   99130
// 42174   69145
// 62129   12281
// 87307   72432
// 54431   47057
// 32208   43948
// 36159   92837
// 92813   16218
// 30956   87764
// 81881   16847
// 82389   14216
// 81627   46027
// 12133   59074
// 83315   88230
// 17677   82701
// 11309   32104
// 24911   35927
// 77700   98147
// 43948   53055
// 82304   22718
// 94870   55364
// 67575   85199
// 49305   93182
// 15751   15044
// 66060   26171
// 30935   41610
// 28356   32565
// 18811   12256
// 64019   23131
// 34225   17638
// 15964   13958
// 21017   44088
// 34116   81436
// 52676   32857
// 95338   16079
// 78527   46924
// 93795   85851
// 12924   64525
// 85065   79359
// 45073   47356
// 30072   43948
// 98834   32104
// 57372   73266
// 83929   79432
// 90423   82701
// 22832   98740
// 48430   59406
// 73629   93643
// 26263   94506
// 94074   14216
// 26414   98740
// 56951   55364
// 50559   43948
// 63550   31546
// 90368   63317
// 32146   46924
// 47438   57185
// 58449   43948
// 47368   85851
// 32574   15690
// 83798   92129
// 14115   48770
// 81573   66940
// 51307   52219
// 13174   47057
// 36828   67828
// 38526   44088
// 44179   54539
// 52115   89989
// 78802   62495
// 34661   14805
// 32323   59466
// 27132   30442
// 79104   63409
// 63502   46386
// 97485   55364
// 93125   45846
// 22160   14216
// 94150   21543
// 16960   75856
// 41717   62129
// 16797   13241
// 16286   31406
// 81133   73266
// 62615   36776
// 38433   47057
// 17558   77268
// 31164   99409
// 98740   37183
// 16053   46924
// 83861   14216
// 89754   14216
// 90249   14216
// 45631   44427
// 79425   67927
// 41085   82701
// 61288   93605
// 66018   98413
// 22664   49595
// 48544   78826
// 24552   57029
// 13795   59246
// 17199   69353
// 33038   93573
// 37670   50912
// 22237   40613
// 93548   92536
// 71344   90698
// 95400   97202
// 16457   29422
// 79172   12325
// 87249   25678
// 32398   57782
// 42920   65021
// 20491   17593
// 29343   15560
// 51134   56929
// 87045   18964
// 16859   67927
// 50451   23131
// 88013   99947
// 79869   26386
// 17158   13958
// 47399   93686
// 32349   20008
// 88683   69537
// 49926   93643
// 86432   89768
// 82719   35057
// 56739   92864
// 95877   43633
// 69037   59576
// 95747   72337
// 15660   23131
// 13684   67506
// 87807   24977
// 45695   44088
// 14570   23131
// 45507   96958
// 79826   46189
// 86233   96377
// 57051   96244
// 16227   70718
// 66940   87229
// 16621   77709
// 67736   19049
// 36049   43120
// 27324   13585
// 89099   46924
// 80234   73266
// 30105   82570
// 42497   85199
// 20275   47057
// 84842   67828
// 18545   31766
// 22010   89576
// 44172   33974
// 11085   32612
// 48341   28004
// 94313   14216
// 65788   46924
// 27317   92981
// 68318   70030
// 56329   60704
// 29327   91745
// 53630   57702
// 24518   82701
// 96364   81945
// 95503   47057
// 41188   40000
// 16708   20405
// 31294   30878
// 33264   98085
// 64245   96240
// 14497   26073
// 77398   21420
// 16427   72248
// 26395   46924
// 22620   93997
// 17321   12686
// 26035   72607
// 58951   54463
// 38225   30571
// 89267   35057
// 30825   66365
// 98399   67169
// 80743   46924
// 80557   91342
// 35024   72939
// 53184   15700
// 71001   47443
// 97339   33591
// 96913   78805
// 42578   73266
// 53465   82681
// 74719   75723
// 96923   58014
// 92916   71872
// 26229   14521
// 42662   96240
// 81620   47057
// 46956   29400
// 39197   98476
// 30330   45605
// 57702   20507
// 82062   62129
// 37754   10380
// 97560   40495
// 45988   54539
// 42413   38989
// 58786   26969
// 41724   60576
// 55364   69527
// 64004   44088
// 87772   31704
// 65614   23131
// 44781   53388
// 78305   40217
// 32629   36036
// 78238   51508
// 61460   14216
// 46112   96240
// 61748   90420
// 41222   62129
// 14622   23131
// 12228   54539
// 95242   60673
// 46228   69114
// 80525   75711
// 45245   46098
// 67491   58014
// 52166   83687
// 38396   67828
// 31358   43948
// 55034   37772
// 56827   46924
// 79835   93798
// 89347   58014
// 82227   18043
// 63832   32104
// 62004   10083
// 26506   92531
// 69651   29640
// 72433   82716
// 40513   63891
// 18717   92129
// 30405   23131
// 74331   44088
// 72157   67849
// 74767   54539
// 30847   35819
// 18242   20586
// 69756   67844
// 72005   57702
// 92985   86192
// 35084   52372
// 73020   92992
// 48804   93643
// 75034   57702
// 67280   55364
// 13826   44088
// 58014   28935
// 26965   41912
// 32785   70621
// 67828   88974
// 24669   12565
// 83563   46791
// 24440   98740
// 85814   99882
// 96689   89250
// 83424   99433
// 86597   92129
// 35057   19703
// 90254   75605
// 27503   45668
// 80689   57779
// 85142   43542
// 47144   32104
// 81029   55196
// 88306   85851
// 44736   91531
// 44675   70030
// 56611   75708
// 99455   48355
// 76675   46015
// 58779   43948
// 87090   93643
// 28546   78920
// 60401   31361
// 25679   91728
// 40839   57168
// 36746   43948
// 79132   82701
// 66132   61087
// 68819   36117
// 36538   12235
// 27205   76760
// 24399   23139
// 44240   45473
// 35819   96240
// 12508   99554
// 76682   43948
// 92401   85296
// 86766   41706
// 96643   27209
// 53030   85851
// 10426   29096
// 47697   20405
// 68686   82701
// 55276   98740
// 88787   14521
// 68667   54484
// 88551   82701
// 86242   93860
// 33643   17327
// 19228   49220
// 94076   63820
// 66464   95977
// 32020   57329
// 39310   47057
// 45805   82325
// 62915   96018
// 13011   60296
// 88834   40986
// 82701   44460
// 79163   37444
// 57767   47909
// 21571   56724
// 48453   66228
// 92533   20251
// 71231   43948
// 26769   54336
// 71828   96240
// 14891   30317
// 92462   74559
// 57405   62129
// 64689   45242
// 14673   75437
// 37392   12408
// 88004   68886
// 11897   85851
// 35121   19747
// 65978   46924
// 59214   35819
// 69160   82701
// 86199   78031
// 84182   79283
// 46746   70030
// 93280   31194
// 78233   42061
// 31751   44088
// 92129   41105
// 81082   44088
// 69123   85851
// 20505   66320
// 41538   43948
// 64819   28581
// 20294   73266
// 48547   31547
// 47633   15882
// 96892   58776
// 22150   41774
// 18701   93643
// 61229   42035
// 78415   32104
// 66928   65236
// 35556   79431
// 33671   62129
// 96468   87478
// 50427   58131
// 25039   99100
// 80962   32104
// 69045   62129
// 32104   75645
// 59924   23131
// 18240   70030
// 88763   58014
// 60348   43980
// 20717   51159
// 81946   79855
// 20510   68239
// 37273   43948
// 99008   54986
// 13046   53592
// 87961   14216
// 16856   87339
// 13289   29653
// 81110   65830
// 25077   66583
// 53154   96594
// 22799   77151
// 44901   98740
// 80985   40597
// 39889   66837
// 32167   67057
// 46469   19487
// 42664   77151
// 28717   67927
// 48319   23742
// 20405   63271
// 99160   68742
// 37312   86445
// 49441   84577
// 42459   77403
// 76352   25777
// 42818   73266
// 96351   89012
// 55426   69362
// 44989   93643
// 68109   67066
// 87896   81830
// 73110   89259
// 41918   35819
// 46805   73266
// 61826   43948
// 32096   54757
// 26386   22428
// 70847   17131
// 63265   63742
// 66807   18158
// 29422   36229
// 56355   37525
// 22577   46924
// 99518   44088
// 16441   66929
// 26818   76171
// 18649   85851
// 76731   61187
// 30590   91024
// 90428   58160
// 16076   67927
// 13553   37915
// 91615   32416
// 36190   63670
// 49749   49989
// 62226   58313
// 25075   46700
// 30720   89560
// 20085   28489
// 95853   74174
// 94343   35819
// 18518   80833
// 98111   86331
// 63474   33979
// 24642   67927
// 76558   23131
// 26475   58014
// 80306   58014
// 92346   48193
// 20270   95402
// 23131   43948
// 23638   60254
// 86655   57352
// 58258   45523
// 34945   61572
// 33250   96240
// 84692   11925
// 74810   80726
// 50681   52269
// 79610   73266
// 30424   17447
// 14983   82701
// 37491   93643
// 36576   73266
// 31400   92479
// 74498   62129
// 19311   85090
// 78393   54666
// 44638   35057
// 71239   35819
// 33836   77370
// 87014   35057
// 49752   31956
// 89676   85199
// 31538   14521
// 54931   18949
// 78700   85199
// 57624   83620
// 55476   42249
// 36922   23131
// 83133   96903
// 33766   38715
// 90922   92129
// 84184   85199
// 84873   98740
// 30986   46301
// 66208   66981
// 76128   44088
// 54499   46924
// 11089   73266
// 63966   66921
// 24165   60756
// 65766   13958
// 98485   92129
// 31557   32104
// 62423   44088
// 54888   52459
// 61829   75842
// 26964   63459
// 63722   32104
// 71060   45395
// 60721   85952
// 14154   56940
// 71805   82701
// 74964   80051
// 23705   85348
// 27306   30788
// 57026   35057
// 95790   30087
// 47055   67481
// 20026   75622
// 92097   12792
// 22924   38758
// 30454   42427
// 77910   99903
// 20644   30998
// 51589   39385
// 83392   76104
// 92902   93643
// 44609   42484
// 82287   20771
// 88814   15393
// 39082   73266
// 37969   85199
// 57693   96633
// 43012   93643
// 29944   78876
// 68317   66940
// 33738   58014
// 17794   98740
// 41165   47180
// 14871   41373
// 42771   43164
// 82391   29055
// 79484   53019
// 58189   29804
// 19422   82701
// 48923   83734
// 76839   85851
// 71377   23080
// 50558   44088
// 25393   45650
// 39296   84954
// 84189   57168
// 85258   22386
// 30912   13039
// 77881   48653
// 67451   46924
// 47082   89946
// 91778   85851
// 99760   37363
