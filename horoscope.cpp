#include<iostream>
using namespace std;



// Basic Info

class Basic
{
    public:
    string Name;
    string Gender;

    public:
    void get_info()
    {
        cout<<endl;
        cout<<"    THE OLD SCHOOL HOROSCOPE"<<endl;
        cout<<endl;
        cout<<"  /WWWWWWW/"<<"   "<<"       /WWWWW/"<<endl;
        cout<<"_.'` o_o `'._"<<"   "<<"   _|  o_o  |_"<<endl;
        cout<<" (_  <->  _)"<<"  "<<"   (_    (_)    _)"<<endl;
        cout<<"  : -...- :   "<<"  "<<"    : ~~~~~ :   "<<endl;
        cout<<"  |_______|   "<<"  "<<"    |_______|   "<<endl;
        cout<<"    _____   "<<"  "<<"        _____   "<<endl;
        cout<<"  (`'---'`)   "<<"  "<<"     [''''']  "<<endl;
        cout<<endl;
        cout<<"Enter your Name: ";
        cin>>Name;
        cout<<"Enter your Gender: ";
        cin>>Gender;
        cout<<endl;
    }

    
};

// Birth Dates

class Date:public Basic
{
    public:
    string date[5][7];
    int d;

    public:
    void get_info()
    {
        cout<<"************BIRTH DATES**************"<<endl;
        string date[5][7]={{"1","2","3","4","5","6","7"},
                    {"8","9","10","11","12","13","14"},
                    {"15","16","17","18","19","20","21"},
                    {"22","23","24","25","26","27","28"},
                    {"29","30","31"," "," "," "," "}};

        for (int i=0;i<=4;i++)
        {
            for (int j=0;j<=6;j++)
            {
                cout<<date[i][j]<<"\t";
            }
            cout<<"\n";
        }
        
        cout<<endl;
    }
};

//  Birth Months

class Month:public Basic
{
    public:
    string month[2][6];
    int m;

    public:
    void get_info()
    {
        
        cout<<"************BIRTH MONTHS**************"<<endl;
        
        string month[2][6]={{"1","2","3","4","5","6"},
                    {"7","8","9","10","11","12"}};
        for (int i=0;i<=1;i++)
        {
            for (int j=0;j<=5;j++)
            {
                cout<<month[i][j]<<"\t";
            }
            cout<<"\n";
        }

        cout<<endl;
    }
};

//  Zodiac Signs

class Zodiac:public Month,Date
{
    int m;int d;int ch;
    
    public:
    void Sign()
    {
        cout<<"Enter your birth date : ";
        cin>>d;

        cout<<endl;

        cout<<"Enter your birth month : ";
        cin>>m;

        cout<<endl;

        // ARIES 

        if((m==3&&d>=21&&d<=31)||(m==4&&d<=19&&d>31))
        {
            cout<<"ARIES : "<<"  "<<".-.   .-."<<endl;
            cout<<"     "<<" "<<"(_  \\ /  _)"<<endl;
            cout<<"     "<<" "<<"     |      "<<endl;
            cout<<"     "<<" "<<"     |      "<<endl;
            cout<<endl;
            do{
                cout<<"**********MENU**********"<<endl;
                cout<<"What Do You Want To Know?"<<endl;
                cout<<"1.Basic Traits"<<endl;
                cout<<"2.Career"<<endl;
                cout<<"3.Love"<<endl;
                cout<<"4.Exit"<<endl;
                cout<<"Enter your Choice:"<<endl;
                cin>>ch;
                switch(ch)
                {
                    case 1:
                        cout<<"*******BASIC TRAITS*******"<<endl;
                        cout<<"Aries:"<<endl;
                        cout<<"Aries loves to be number one, so it’s no surprise that these audacious rams are the first sign of the zodiac."<<endl;
                        cout<<"Bold and ambitious, Aries dives headfirst into even the most challenging situations (which is appropriate, since the body part associated with Aries is the head)."<<endl; 
                        cout<<"Like their fellow fire signs, Leo and Sagittarius,Aries is a passionate, motivated,and confident leader who builds community with their cheerful disposition and relentless determination."<<endl;
                        cout<<"Uncomplicated and direct in their approach,they often get frustrated by exhaustive details and unnecessary nuances."<<endl;
                        break;
                    case 2:
                        cout<<"*******CAREER*******"<<endl;
                        cout<<"Aries:"<<endl;
                        cout<<"Aries are natural born leaders, and as such they have an easy time translating that authority into becoming one badass boss."<<endl; 
                        cout<<"But heads up: You're not the best at working for a boss, as you can become irritated by micromanagement and restriction."<<endl; 
                        cout<<"Don't worry, Aries—you'll rise to the top in no time…that is, if you make sure to finish what your start."<<endl;
                        cout<<"Possessing strong interpersonal skills is important for you, since follow-through isn't your forte," "says Fox."<<endl;
                        cout<<"You tend to start lots of projects, but you don't actually finish many of them on your own."<<endl;
                        cout<<"That's where a good,supportive team of friends or colleagues comes in: They can take your bold ideas and run with them."<<endl;
                        cout<<"Ideal Careers"<<endl;
                        cout<<"Anything having to do with competition or physicality is right up your alley. "<<endl;
                        cout<<"Think: outdoor guide, personal trainer, athlete, or working for a sports organization."<<endl;
                        cout<<"And, as mentioned before, a CEO or other management professional isn't far off—you like being in control, and do best when you can offer your insight to a support team to execute."<<endl;
                        break;
                    case 3:
                        cout<<"*******LOVE*******"<<endl;
                        cout<<"Aries"<<endl;
                        cout<<"Aries are the first sign of the zodiac and are known for their impulsivity."<<endl;
                        cout<<"When it comes to dating, Aries don’t do demure: These fire signs are ruled by Mars, the planet of action."<<endl;
                        cout<<"Aries are quick to fall in love and aren’t afraid to let the world know through serious (and sometimes excessive) public displays of affection."<<endl; 
                        cout<<"When Cupid’s arrow strikes these passionate rams, they’ll likely try to put a ring on it faster than you can say, “we just met.”"<<endl;
                        cout<<"Though it may be tempting to let a vivacious Aries sweep you off your feet, approach with caution. "<<endl;
                        cout<<"Aries often set unrealistic expectations on new relationships, only to be severely disappointed when the honeymoon phase ends."<<endl;
                        cout<<"Aries must remember that the process of getting to know someone takes time. Hard work, empathy, and patience allow couples to create a solid foundation built on trust, loyalty, and mutual respect."<<endl;
                        cout<<"Now that’s something worth waiting for."<<endl;
                    case 4:
                        cout<<"EXIT"<<endl;
                        break;
                }
            }while(ch<=3);
        }

        // TAURUS

        else if((m==4&&d>=20)||(m==5&&d<=20))
        {
            cout<<"TAURUS : "<<"  "<<".     ."<<endl;
            cout<<"         "<<"  "<<"'.___.'"<<endl;
            cout<<"         "<<"  "<<".'   `."<<endl;
            cout<<"         "<<" "<<":       :"<<endl;
            cout<<"         "<<" "<<":       :"<<endl;
            cout<<"         "<<""<<"  `.___.' "<<endl;
            cout<<endl;
            do{
                cout<<"**********MENU**********"<<endl;
                cout<<"What Do You Want To Know?"<<endl;
                cout<<"1.Basic Traits"<<endl;
                cout<<"2.Career"<<endl;
                cout<<"3.Love"<<endl;
                cout<<"4.Exit"<<endl;
                cout<<"Enter your Choice:"<<endl;
                cin>>ch;
                switch(ch)
                {
                  case 1:
                    cout<<"*******BASIC TRAITS*******"<<endl;
                    cout<<"Taurus"<<endl;
                    cout<<"Taurus is an earth sign represented by the bull. "<<endl;
                    cout<<"Like their celestial spirit animal, Taureans enjoy relaxing in serene, bucolic environments, surrounded by soft sounds, soothing aromas, and succulent flavors."<<endl; 
                    cout<<"Taurus is ruled by Venus, the enchanting planet that governs love, beauty, and money. "<<endl;
                    cout<<"Taurus’s Venusian influence make this earth sign the most sensual of the zodiac: These cosmic oxen are enchanted by any physical manifestation of comfort and luxury."<<endl;
                    cout<<"Pleasure is a necessity for epicurean Taureans and they feel most content when pampered."<<endl;
                  break;
                  case 2:
                    cout<<"*******CAREER*******"<<endl;
                    cout<<"Taurus"<<endl;
                    cout<<"As a worker, Taurus employees are grounded and practical, making you ideal in the workplace, as you can manoeuvre from leader to follower in any situation."<<endl;
                    cout<<"You're more naturally inclined to lead, however, but more by example—your hard work and dedication make you a great team player, though your stubborn nature can be a little off-putting, so you'll need to pick your battles when it comes to projects and conflicts on the job."<<endl;
                    cout<<"Ideal Career:"<<endl;
                    cout<<"One of the most dependable and hardworking signs, you'll thrive in an environment that rewards tenacity and dedication."<<endl;
                    cout<<"Jobs like flower arranging, food industry jobs, or luxury sales provide the two things Taurus value most—beautiful things and a steady routine."<<endl;
                    cout<<"Taurus is also (no surprise here) great with money and practical financial advice, making them ideal for banking and finance careers."<<endl;
                    break;
                  case 3:
                    cout<<"*******LOVE*******"<<endl;
                    cout<<"Taurus"<<endl;
                    cout<<"Taureans are known to be steadfast, grounded, and loyal partners."<<endl;
                    cout<<" But before you can reap the benefits of a Taurus relationship, you must first wine and dine these earth signs like there’s no tomorrow (and no overdraft fees)."<<endl;
                    cout<<"Taurus is ruled by Venus, the planet of love and beauty, and so Taurus' approach to seduction style is truly enveloping."<<endl;
                    cout<<"Get ready for an immersive journey through the sights, sounds, and flavors of romance."<<endl;
                    cout<<"A smitten Taurus will express romantic interest through an exploration of sensual luxury: rich cuisine, esoteric liquors, intoxicating perfumes."<<endl;
                    cout<<"Bathing in lavender oil not your thing? That could be a problem."<<endl;
                    cout<<"Taurus is the sign of the bull, and much like the massive creatures themselves, these signs do not like to budge."<<endl;
                    cout<<"Taureans take disagreements personally and are not inclined to change their minds."<<endl;
                    cout<<"Romantic bulls must remember that all relationships require compromise, and flexibility is closely related to kindness and empathy."<<endl;
                    break;
                  case 4:
                    cout<<"EXIT"<<endl;
                    break;
                }
            }while(ch<=3);
        }   

        // GEMINI

        else if((m==5&&d>=21)||(m==6&&d<=20))
        {
            cout<<"GEMINI : "<<"  "<<"._____."<<endl;
            cout<<"         "<<"  "<<"  | |  "<<endl;
            cout<<"         "<<"  "<<"  | |  "<<endl;
            cout<<"         "<<"  "<<"  | |  "<<endl;
            cout<<"         "<<"  "<<" _|_|_ "<<endl;
            cout<<"         "<<"  "<<"'     `"<<endl;
            cout<<endl;
            do{
                cout<<"**********MENU**********"<<endl;
                cout<<"What Do You Want To Know?"<<endl;
                cout<<"1.Basic Traits"<<endl;
                cout<<"2.Career"<<endl;
                cout<<"3.Love"<<endl;
                cout<<"4.Exit"<<endl;
                cout<<"Enter your Choice:"<<endl;
                cin>>ch;
                switch(ch)
                {
                  case 1:
                    cout<<"*******BASIC TRAITS*******"<<endl;
                    cout<<"Gemini"<<endl;
                    cout<<"Have you ever been so busy that you wished you could clone yourself just to get everything done? That’s the Gemini experience in a nutshell. "<<endl;
                    cout<<"Appropriately symbolized by the celestial twins, this air sign was interested in so many pursuits that it had to double itself. "<<endl;
                    cout<<"Because of Geminis' intrinsic duality, they're often falsely misrepresented as two-faced. "<<endl;
                    cout<<"In reality, however, Gemini rarely has a hidden agenda. "<<endl;
                    cout<<"Playful and intellectually curious, Gemini is constantly juggling a variety of passions, hobbies, careers, and friend groups."<<endl;
                    cout<<"They are the social butterflies of the zodiac: These quick-witted twins can talk to anyone about anything."<<endl;
                    cout<<"Find them buzzing between happy hours, dinner parties, and dance floors."<<endl;
                  break;
                  case 2:
                    cout<<"*******CAREER*******"<<endl;
                    cout<<"Gemini"<<endl;
                    cout<<"Geminis thrive in fast-paced, stimulating environments that offer them variety and the chance to interact with many different things—whether that's people, applications, environments—you get the gist."<<endl;
                    cout<<"You can quickly move through anything at rapid speed, but beware: this also means you can get bored, and quickly, if not given a diverse task list."<<endl;
                    cout<<"Just make sure you don't fall into a tedious work environment, and you'll be happy."<<endl;
                    cout<<"Ideal Career:"<<endl;
                    cout<<"Anything that requires relaying information and keeping up with tons of different topics is an ideal career path for Gemini, so teaching and communications are perfect for you."<<endl;
                    cout<<"You're mentally active and love to process a lot of different aspects of a project, so being a go-between of sorts would also work well—think PR and publicity or project manager"<<endl;
                    break;
                  case 3:
                    cout<<"*******LOVE*******"<<endl;
                    cout<<"Gemini"<<endl;
                    cout<<"Gemini is the first air sign and is represented by the twins."<<endl;
                    cout<<"Though Gemini often have a bad reputation for being two-faced, these friendly, sociable air signs rarely have nefarious intentions."<<endl;
                    cout<<"In fact, Mercurial Geminis are best known for their talkative, spontaneous, and upbeat dispositions."<<endl;
                    cout<<"The Gemini seduction technique corresponds with their general attitude: These twins love to chat! Gemini are all about storytelling, and these jacks of all trades often have lots of quirky hobbies."<<endl;
                    cout<<"Have a stamp collection? So does Gemini! Love hot air ballooning? Sign Gem up! Gemini are the Energizer Bunnies of the zodiac, but if you’re someone who values cozy, quality time, there may be an issue down the line."<<endl;
                    cout<<"The twins needs to stay active constantly, which sometimes makes it difficult to get to know this sign on a deeper, more personal level."<<endl;
                    cout<<"Gemini must work to realize that quiet evenings at home are not time wasted, and FOMO only goes so far when cultivating a new relationship."<<endl;
                    break;
                  case 4:
                    cout<<"EXIT"<<endl;
                    break;
                }
            }while(ch<=3);
            
        }

        // CANCER

        else if((m==6&&d>=21)||(m==7&&d<=22))
        {
            cout<<"CANCER : "<<"  "<<".--."<<endl;
            cout<<"         "<<" "<<"/   _`."<<endl;
            cout<<"         "<<" "<<"(_) ( )"<<endl;
            cout<<"         "<<" "<<"'.    /"<<endl;
            cout<<"         "<<" "<<"  `--' "<<endl;
            cout<<endl;
            do{
                cout<<"**********MENU**********"<<endl;
                cout<<"What Do You Want To Know ? "<<endl;
                cout<<endl;
                cout<<"1. Basic Traits "<<endl;
                cout<<"2. Career "<<endl;
                cout<<"3. Love "<<endl;
                cout<<"4. Exit "<<endl;
                cout<<"Enter your Choice : ";
                cin>>ch;
                cout<<endl;
                switch(ch)
                {
                    case 1:
                        cout<<"*******BASIC TRAITS*******"<<endl;
                        cout<<endl;
                        cout<<"Cancer : "<<endl;
                        cout<<"Cancer is a cardinal water sign. Represented by the crab, this oceanic crustacean seamlessly weaves between the sea and shore, representing Cancer’s ability to exist in both emotional and material realms."<<endl;
                        cout<<"Cancers are highly intuitive and their psychic abilities manifest in tangible spaces: For instance, Cancers can effortlessly pick up the energies in a room."<<endl;
                        cout<<"These crabs are highly sensitive to their environments, as well as extremely self-protective. Much like their celestial spirit animal, Cancers are shielded by hard, external shells. At first, these crabs may be perceived as cold or distant."<<endl;
                        cout<<"With time, though, Cancers reveal their gentle nature, genuine compassion, and mystical capabilities. Just don't be surprised if it takes a while to get to know them."<<endl;
                        cout<<endl;
                        break;
                    case 2:
                        cout<<"*******CAREER*******"<<endl;
                        cout<<"Cancer : "<<endl;
                        cout<<"Cancers are the most traditional, nurturing sign of the zodiac, so they like to lead by example and can handle responsibility with ease. You are, by definition, a caretaker—so any job that lets you give advice and problem solve to make everyone happy is a great one."<<endl;
                        cout<<"You don't do well in careers where you can't see your work making a difference or getting results—whether that's with a person or in the bottom line—so make sure you're getting the motivation you need from your managers with regular check-ins or reports."<<endl;
                        cout<<"Ideal Careers : "<<endl;
                        cout<<"Cancers make natural childcare workers and nannies, but they also make amazing social workers, human resource employees, lawyers, teachers, and executives."<<endl;
                        cout<<"Healthcare and wellness are also important and vital parts of this sign, so anything in those arenas—like being a dietitian or nutritionist—are right up your alley."<<endl;
                        cout<<endl;
                        break;
                    case 3:
                        cout<<"*******LOVE*******"<<endl;
                        cout<<"Cancer : "<<endl;
                        cout<<"Cancers are the sign of the crab, and the shellfish anatomy reveals a lot about this water sign’s romantic disposition. Like the crab itself, Cancers cover their soft, vulnerable interiors with rock-solid Armor."<<endl;
                        cout<<"The most difficult aspect of dating a Cancer is getting through their tough exterior. Slow, steady, and consistent pacing is critical for these delicate creatures, as they will need to trust you completely before they let their guards down."<<endl;
                        cout<<"This can be a daunting process, however, as the slightest mishap can put Cancer on the defence. If you’re fortunate enough to earn a Cancer’s confidence, these water signs are highly intuitive, nurturing, and generous creatures who love cohabitating, creating, and dreaming."<<endl;
                    case 4:
                        cout<<"EXIT"<<endl;
                        break;
                }
            }while(ch<=3);
            
        }

        // LEO

        else if((m==7&&d>=23)||(m==8&&d<=22))
        {
            cout<<"LEO : "<<"  "<<"   .--.  "<<endl;
            cout<<"      "<<"  "<<"  (    )"<<endl;
            cout<<"      "<<"  "<<"  (_)  / "<<endl;
            cout<<"      "<<"  "<<"  (_, "<<endl;
             cout<<endl;
            do{
                cout<<"**********MENU**********"<<endl;
                cout<<"What Do You Want To Know ? "<<endl;
                cout<<endl;
                cout<<"1. Basic Traits "<<endl;
                cout<<"2. Career "<<endl;
                cout<<"3. Love "<<endl;
                cout<<"4. Exit "<<endl;
                cout<<"Enter your Choice : ";
                cin>>ch;
                cout<<endl;
                switch(ch)
                {
                    case 1:
                        cout<<"*******BASIC TRAITS*******"<<endl;
                        cout<<endl;
                        cout<<"Leo : "<<endl;
                        cout<<"Roll out the red carpet, because Leo has arrived. Leo is represented by the lion, and these spirited fire signs are the kings and queens of the celestial jungle."<<endl;
                        cout<<"They are delighted to embrace their royal status: Vivacious, theatrical, and passionate, Leos love to bask in the spotlight and celebrate themselves.These lions are natural leaders and they enjoy cultivating friendships and romances that are artistically and creatively inspired."<<endl;
                        cout<<"Playful Leos have no problem leaning into drama-fueled romances that are perfectly suited for the tabloids.After all, every Leo perceives him or herself as a celebrity."<<endl;
                        cout<<"These astrological divas never get tired of lavish dinners, exclusive parties,or decadent designer wear."<<endl;
                        cout<<endl;
                        break;
                    case 2:
                        cout<<"*******CAREER*******"<<endl;
                        cout<<"Leo : "<<endl;
                        cout<<"Leos love exposure and attention—but not always in a look at me kind of way—you just love inspiring others to be the best. Teaching and politics are natural fits for the lion, and they are some of the best bosses—once they win over their team, that is. (Leos have a tendency to be high-maintenance and can often disrupt team environments, but you usually win everyone over at the end with your charm and good nature.)"<<endl;
                        cout<<"Ideal Careers : "<<endl;
                        cout<<"As mentioned, teaching and politics are a great fit for you, while anything having to do with entertaining others—such as acting, music, movie work, or even costume design can also pique your interest.You also make magnetic leaders, so CEO and directors aren't far off for the Leo."<<endl;
                        cout<<endl;
                        break;
                    case 3:
                        cout<<"*******LOVE*******"<<endl;
                        cout<<"Leo : "<<endl;
                        cout<<"Have you ever dated a celebrity? Because that just might be good practice for getting with a Leo. Leos are ruled by the sun, and these fire signs envision themselves as the center of the universe."<<endl;
                        cout<<"Leos love classic, old-Hollywood-style romance, including grandiose displays of adoration (Twenty dozen roses? How thoughtful!)and paparazzi-worthy drama. Leo lovers value the concept of a “power couple” and think of their partners as extensions of self."<<endl;
                        cout<<"But despite their larger-than-life personas, lions are also sensitive creatures. If a Leo feels hurt by their mate, it could lead to a total ego meltdown.Regal lions must remember that relationships are not just for the tabloids — they also require behind-the-scenes dedication, compromise, and vulnerability.When they check off these boxes, the razzle-dazzle aspect of courtship is that much more fun."<<endl;
                        cout<<endl;
                        break;
                    case 4:
                        cout<<"EXIT"<<endl;
                        break;
                }
            }while(ch<=3);
        }
        
        // VIRGO 

        else if((m==8&&d>=23)||(m==9&&d<=22))
        {
            cout<<"VIRGO : "<<"  "<<"      _       "<<endl;
            cout<<"        "<<"  "<<"' `:--.--.    "<<endl;
            cout<<"        "<<"  "<<"' `:--.--.    "<<endl;
            cout<<"      "<<"  "<<"     |  |  |_ "<<endl;
            cout<<"      "<<"  "<<"     |  |  | ) "<<endl;
            cout<<"      "<<"  "<<"     |  |  | / "<<endl;
            cout<<"      "<<"  "<<"       (J "<<endl;
            cout<<endl;
            do{
                cout<<"**********MENU**********"<<endl;
                cout<<"What Do You Want To Know ? "<<endl;
                cout<<endl;
                cout<<"1. Basic Traits "<<endl;
                cout<<"2. Career "<<endl;
                cout<<"3. Love "<<endl;
                cout<<"4. Exit "<<endl;
                cout<<"Enter your Choice : ";
                cin>>ch;
                cout<<endl;
                switch(ch)
                {
                    case 1:
                        cout<<"*******BASIC TRAITS*******"<<endl;
                        cout<<endl;
                        cout<<"Virgo : "<<endl;
                        cout<<"Virgo is an earth sign historically represented by the goddess of wheat and agriculture, an association that speaks to Virgo’s deep-rooted presence in the material world."<<endl;
                        cout<<"Virgos are logical, practical, and systematic in their approach to life.This earth sign is a perfectionist at heart and isn’t afraid to improve skills through diligent and consistent practice."<<endl;
                        cout<<"Virgo rules the digestive system, which makes these earth signs especially attuned to the ingredients that make up a whole — in food and in everything else.They're hyper-aware of every detail."<<endl;
                        cout<<endl;
                        break;
                    case 2:
                        cout<<"*******CAREER*******"<<endl;
                        cout<<"Virgo : "<<endl;
                        cout<<"Virgo is an earth sign historically represented by the goddess of wheat and agriculture, an association that speaks to Virgo is deep-rooted presence in the material world."<<endl;
                        cout<<"Virgos are logical, practical, and systematic in their approach to life.This earth sign is a perfectionist at heart and is not afraid to improve skills through diligent and consistent practice."<<endl;
                        cout<<"Virgo rules the digestive system, which makes these earth signs especially attuned to the ingredients that make up a whole in food and in everything else. They're hyper-aware of every detail."<<endl;
                        cout<<endl;
                        break;
                    case 3:
                        cout<<"*******LOVE*******"<<endl;
                        cout<<"Virgo : "<<endl;
                        cout<<"Virgos are the most analytical sign of the zodiac, so it’s no surprise that the fastest way into a Virgo’s heart is through hyper-intellectualism. These even-tempered earth signs love absorbing information, and Virgos are often avid readers, movie buffs, or music aficionados."<<endl;
                        cout<<"Virgos rely on logic and organization, so the seduction style of this Mercurial sign is often based on tangible day-to-day compatibilities. Do you have similar sleep schedules? Do you both enjoy the New York Times crossword puzzle? How often do you shower?"<<endl;
                        cout<<"Virgos use facts to create holistic profiles of their lovers and enjoy partnership that emphasizes reciprocity and kindness.Though Virgos' greatest strength is their sharp critical thinking, this can also be their romantic weakness."<<endl;
                        cout<<"On a bad day, Virgos can be perfectionists, and their observations can become harsh and nit-picky. For a healthy partnership, Virgos must remain nonjudgmental and remember that structure and routine are not always the most important things in life."<<endl;
                        cout<<endl;
                        break;
                    case 4:
                        cout<<"EXIT"<<endl;
                        break;
                }
            }while(ch<=3);
        }

        // LIBRA

        else if((m==9&&d>=23)||(m==10&&d<=22))
        {
            cout<<"LIBRA : "<<"  "<<"     __     "<<endl;
            cout<<"        "<<"  "<<"___.'  '.___"<<endl;
            cout<<"        "<<"  "<<"____________"<<endl;
            cout<<endl;
             do{
                cout<<"**********MENU**********"<<endl;
                cout<<"What Do You Want To Know?"<<endl;
                cout<<"1.Basic Traits"<<endl;
                cout<<"2.Career"<<endl;
                cout<<"3.Love"<<endl;
                cout<<"4.Exit"<<endl;
                cout<<"Enter your Choice:"<<endl;
                cin>>ch;
                switch(ch)
                {
                  case 1:
                    cout<<"*******BASIC TRAITS*******"<<endl;
                    cout<<"Libra"<<endl;
                    cout<<"Libra is an air sign represented by the scales (interestingly, the only inanimate object of the zodiac), an association that reflects Libra's fixation on balance and harmony. "<<endl;
                    cout<<"Libra is obsessed with symmetry and strives to create equilibrium in all areas of life. "<<endl;
                    cout<<"These air signs are the aesthetes of the zodiac: Ruled by Venus, the planet that governs love, beauty, and money, Libras adore high art, intellectualism, and connoisseurship. "<<endl;
                    cout<<"Suave Libras need to surround themselves with stunning objects and create environments that reflect their exquisite tastes."<<endl;
                    cout<<"Accordingly, these air signs make excellent designers, decorators, art critics, and stylists."<<endl;
                     break;
                  case 2:
                    cout<<"*******CAREER*******"<<endl;
                    cout<<"Libra"<<endl;
                    cout<<"Libras are social and adept at bringing people together so you're a great mediator in and out of the office. "<<endl;
                    cout<<"The sign of balance, reading people and understanding people's motivations comes naturally to you, and you can often use this to your advantage in any job or career field—think diplomat, assistant, translator, broker, sales person, etc."<<endl;
                    cout<<"Ideal careers: "<<endl;
                    cout<<" Represented by the scales of justice, law enforcement and justice are natural fits for you. "<<endl;
                    cout<<"You're a people person at heart, so working with others is crucial to your happiness—think hospitality, customer service, diplomats, travel agents, and even a wedding planner. "<<endl;
                     break;
                  case 3:
                    cout<<"*******LOVE*******"<<endl;
                    cout<<"Libra"<<endl;
                    cout<<"Libra is represented by the scale and is associated with balance, harmony, and — you guessed it — partnership. "<<endl;
                    cout<<"Libras are often happiest in relationships, so it’s common to find this air sign diving head first into romance."<<endl;
                    cout<<"Libra is ruled by Venus, the planet of love and beauty, and this influence inspires Libra to be extremely aesthetically oriented."<<endl;
                    cout<<"Libras are connoisseurs: They enjoy museum excursions, trips to vineyards, and high-quality interior design. "<<endl;
                    cout<<"Time with a Libra boo can feel like a montage from your favorite rom-com, and these charming air signs certainly know how to impress."<<endl;
                    cout<<"But because Libras hate disappointing their partners, they often avoid conflict like the plague...even if that means resorting to white lies and half-truths in order to keep the peace."<<endl;
                    cout<<"Libra needs to remember that healthy disagreements offer an opportunity to grow, learn, and establish boundaries when needed. "<<endl;
                    cout<<"There’s nothing wrong with speaking your truth, and compromise cannot exist without honest dialogue."<<endl;
                    break;
                  case 4:
                    cout<<"EXIT"<<endl;
                    break;
                }
            }while(ch<=3);
            
        }
        
        
        // SCORPIO 

        else if((m==10&&d>=23)||(m==11&&d<=21))
        {
            cout<<"SCORPIO : "<<"  "<<"      _      "<<endl;
            cout<<"          "<<"  "<<"' `:--.--. "<<endl;
            cout<<"          "<<"  "<<"   |  |  |  "<<endl;
            cout<<"          "<<"  "<<"   |  |  |  "<<endl;
            cout<<"          "<<"  "<<"   |  |  |  "<<endl;
            cout<<"          "<<"  "<<"    `---':  "<<endl;
            cout<<endl;
            do{
                cout<<"**********MENU**********"<<endl;
                cout<<"What Do You Want To Know?"<<endl;
                cout<<"1.Basic Traits"<<endl;
                cout<<"2.Career"<<endl;
                cout<<"3.Love"<<endl;
                cout<<"4.Exit"<<endl;
                cout<<"Enter your Choice:"<<endl;
                cin>>ch;
                switch(ch)
                {
                  case 1:
                    cout<<"*******BASIC TRAITS*******"<<endl;
                    cout<<"Scorpio"<<endl;
                    cout<<"Scorpio is one of the most misunderstood signs of the zodiac. "<<endl;
                    cout<<"Because of its incredible passion and power, Scorpio is often mistaken for a fire sign. "<<endl;
                    cout<<"In fact, Scorpio is a water sign that derives its strength from the psychic, emotional realm."<<endl;
                    cout<<"Like fellow water signs, Cancer and Pisces, Scorpio is extremely clairvoyant and intuitive. "<<endl;
                    cout<<"What makes this water sign unique is its distinctive venomous sting."<<endl;
                    cout<<"Like their celestial spirit animal, the scorpion, Scorpios lie in wait and strike when least expected. "<<endl;
                    cout<<"Life is a game of chess for these calculating water signs, who are constantly plotting several steps ahead in order to orchestrate an eventual checkmate. "<<endl;
                    cout<<"This doesn't mean their intentions are necessarily nefarious."<<endl;
                    cout<<"Scorpios simply know what they want and aren't afraid to work hard and play the long game to get it."<<endl;
                     break;
                  case 2:
                    cout<<"*******CAREER*******"<<endl;
                     cout<<"Scorpio"<<endl;
                     cout<<"No one can keep a secret quite as well as you, Scorpio, and that's something you can use in your career, as you are placed in positions that require discretion,says Fox. "<<endl;
                     cout<<"You thrive in the midst of intelligence organizations, top-level or secret negotiations or handling confidential papers or very expensive goods."<<endl;
                     cout<<"You also love a challenge and to investigate, and your intensity is legendary, which can work in a variety of fields but definitely lend themselves best to things that would repel others—think surgery or medicine or being first at the scene of the crime as a forensic detective."<<endl;
                     cout<<"Ideal careers: "<<endl;
                     cout<<"As mentioned, you would be at home in the surgery room or as a secret agent, as well as working in crisis management (things that need a high level of secrecy) like a real-life Olivia Pope. "<<endl;
                     cout<<"You're also great with resource management and logistics, and would make an outstanding chief financial officer. "<<endl;
                      break;
                  case 3:
                    cout<<"*******LOVE*******"<<endl;
                     cout<<"Scorpio"<<endl;
                     cout<<"Scorpios have a bit of reputation in the zodiac."<<endl;
                     cout<<"These powerful water signs are symbolized by the scorpion, a shadow-dwelling creature infamous for its poisonous stinger. "<<endl;
                     cout<<"Scorpios have an intensity unlike any other sign, and when it comes to romance, this water sign is all about deep soul-diving. "<<endl;
                     cout<<"The ideal relationship for a Scorpio is one that goes the distance emotionally, spiritually, and sexually. "<<endl;
                     cout<<"You may be totally hypnotized by a Scorpio even after just one date: These seductive lovers are extremely bewitching. "<<endl;
                     cout<<"Most Scorpios are aware of their magnetism and enjoy using their powers to manifest their hopes and wishes."<<endl;
                     cout<<"These water signs must remember to use their enchantments for good, and not for evil. "<<endl;
                     cout<<"If not carefully managed, Scorpion energy can lead to obsessive tendencies, control issues, and power struggles within relationships. "<<endl;
                     cout<<"Scorpio must remember that soul connections are precious, and need to be treated with respect and reverence."<<endl;
                     break;
                  case 4:
                    cout<<"EXIT"<<endl;
                    break;
                }
            }while(ch<=3);
        }

        // SAGGITARIUS

        else if((m==11&&d>=22)||(m==12&&d<=21))
        {
            cout<<"SAGITTARIUS : "<<"  "<<" ..."<<endl;
            cout<<"              "<<"  "<<" .':"<<endl;
            cout<<"              "<<"  "<<"  .' "<<endl;
            cout<<"              "<<" "<<" `..' "<<endl;
            cout<<"              "<<" "<<" .'`. "<<endl;
            cout<<endl;
            do{
                cout<<"**********MENU**********"<<endl;
                cout<<"What Do You Want To Know?"<<endl;
                cout<<"1.Basic Traits"<<endl;
                cout<<"2.Career"<<endl;
                cout<<"3.Love"<<endl;
                cout<<"4.Exit"<<endl;
                cout<<"Enter your Choice:"<<endl;
                cin>>ch;
                switch(ch)
                {
                  case 1:
                    cout<<"*******BASIC TRAITS*******"<<endl;
                    cout<<"Sagittarius"<<endl;
                    cout<<"Represented by the archer, Sagittarians are always on a quest for knowledge. "<<endl;
                    cout<<"The last fire sign of the zodiac, Sagittarius launches its many pursuits like blazing arrows, chasing after geographical, intellectual, and spiritual adventures."<<endl;
                    cout<<"Fueled by wanderlust, these archers can be found traversing all corners of the world on thrill-seeking expeditions. "<<endl;
                    cout<<"It’s no surprise that Jupiter, the planet of abundance, spirituality, and growth, governs Sagittarius. "<<endl;
                    cout<<"With so many journeys under their belt, Sagittarians are excellent storytellers and can light up any room with their exhilarating tales and infectious laughter. "<<endl;
                    cout<<"Effortlessly magnetic, Sags easily attract friends and lovers with their sense of humor."<<endl;
                    cout<<"They're the comedians of the zodiac and infuse all of their conversations with wit and no bullshit bluntness. "<<endl;
                    cout<<"While their bon mots are unmatched, Sags must remember to keep their sharp tongues in check. "<<endl;
                    cout<<"Though they know a lot, they don’t know everything — and if they're not careful, they can come off as pretentious or arrogant."<<endl;
                    break;
                  case 2:
                    cout<<"*******CAREER*******"<<endl;
                    cout<<"Sagittarius"<<endl;
                    cout<<"Sagittarius have a knack for conversing with others, inspiring morale, working hard as team player, adapting to change, and encouraging others to enjoy the jobs that they do. "<<endl;
                    cout<<"Translation? You are kind of good at everything when it comes to working. "<<endl;
                    cout<<"Many careers will fit the bill for you—as long as you're not restricted by hierarchy and too many rules."<<endl;
                    cout<<"Ideal careers: "<<endl;
                    cout<<"You love to travel and learn from others in every part of the world, so any job related to the travel industry is a good one, as is any job that has travel as a big part of the job—think consulting or tourism. "<<endl;
                    cout<<"Since you love inspiring others, you're also great as a teacher, youth program leader, or working for a non-profit."<<endl;
                    break;
                  case 3:
                    cout<<"*******LOVE*******"<<endl;
                    cout<<"Sagittarius"<<endl;
                    cout<<"Have you ever been lost in the desert with only your wits to guide you to safety? How about ice climbing up a frozen waterfall or river rafting down the Amazon? Your Sagittarius lover has. "<<endl;
                    cout<<"Sagittarius is the last fire sign of the zodiac and is represented by the archer. "<<endl;
                    cout<<"Sagittarius’s propel their arrows to far-off places and travel incredible distances just to satisfy their daring curiosities."<<endl;
                    cout<<"They love exploration, storytelling, and philosophy, and dating one is like sitting in the passenger seat of Indiana Jones’ Jeep. "<<endl;
                    cout<<"Sags are the life of every party, and often abide by the “no bullshit” approach to communication. "<<endl;
                    cout<<"These daring, exciting fire signs are terrific partners in crime…if they stick around. "<<endl;
                    cout<<"Sags are born to roam, and freedom is very important for to these brave explorers, which is why flings are often much easier for them than commitment. "<<endl;
                    cout<<"In order for their relationships to blossom, Sags need to accept their lovers as their co-pilots. "<<endl;
                    cout<<"After all, partnership can be an extremely exciting adventure in itself."<<endl;
                    break;
                  case 4:
                    cout<<"EXIT"<<endl;
                    break;
                }
            }while(ch<=3);
        } 
        
        // CAPRICORN

        else if((m==12&&d>=22)||(m==1&&d<=19))
        {
            cout<<"CAPRICORN : "<<"  "<<"     _    "<<endl;
            cout<<"           "<<"  "<<" \\      /_)    "<<endl;
            cout<<"           "<<"  "<<"  \\    /`.    "<<endl;
            cout<<"           "<<"  "<<"   \\  /   ;    "<<endl;
            cout<<"           "<<"  "<<"    \\/ __.'   "<<endl;
            cout<<endl;
             do{
                cout<<"**********MENU**********"<<endl;
                cout<<"What Do You Want To Know?"<<endl;
                cout<<"1.Basic Traits"<<endl;
                cout<<"2.Career"<<endl;
                cout<<"3.Love"<<endl;
                cout<<"4.Exit"<<endl;
                cout<<"Enter your Choice:"<<endl;
                cin>>ch;
                switch(ch)
                {
                  case 1:
                    cout<<"*******BASIC TRAITS*******"<<endl;
                    cout<<"Capricorn"<<endl;
                    cout<<"The last earth sign of the zodiac, Capricorn is represented by the sea goat, a mythological creature with the body of a goat and tail of a fish. "<<endl;
                    cout<<"Accordingly, Capricorns are skilled at navigating both the material and emotional realms. "<<endl;
                    cout<<"They scale the steepest mountains — Capricorn rules the knees, making it easier for this sign to climb — while simultaneously exploring their psychic strengths. "<<endl;
                    cout<<"Capricorns tap into their inner fortitude to overcome whatever stands between them and their long-term goals, and they don’t let anything distract them from getting ahead."<<endl;
                    cout<<"Because of their unwavering focus, however, they are often perceived as cold and unemotional. "<<endl;
                    cout<<"Sea goats must remember that not every success in life can be featured on a résumé and that compassion is as important as any professional advancement."<<endl;
                    break;
                  case 2:
                    cout<<"*******CAREER*******"<<endl;
                    cout<<"Capricorn"<<endl;
                    cout<<"Capricorns are serious, pragmatic, and organized—but definitely not boring. "<<endl;
                    cout<<"You have the charisma and enthusiasm to lead a team. "<<endl;
                    cout<<"You're not intimidated or annoyed by authority—you know that with hard work, ambition, and commitment, you too can be at the top. "<<endl;
                    cout<<"Which is, generally, your ultimate goal, no matter where you land. "<<endl;
                    cout<<"Just be careful to make time for other pursuits—Capricorns are notorious workaholics."<<endl;
                    cout<<"Ideal careers:"<<endl;
                    cout<<"Capricorns run a tight ship, so they're great at being a manager or administrator for a number of career paths or companies. "<<endl;
                    cout<<"Your production and administrative skills are some of the best, and you work well in corporate environments with set hierarchies that let you achieve the next rung on the ladder. "<<endl;
                    cout<<"You also make great engineers, architects, and design-adjacent employees, as you're one for details. "<<endl;
                      break;
                  case 3:
                    cout<<"*******LOVE*******"<<endl;
                    cout<<"Capricorn"<<endl;
                    cout<<"Capricorns are thought to age backwards: As stoic Capricorn grows older, the sea goat becomes increasingly youthful, optimistic, and fun loving. "<<endl;
                    cout<<"This also mirrors the typical experience of dating a Capricorn. "<<endl;
                    cout<<"Earthy Capricorns are the most hard-working and professionally ambitious sign of the zodiac."<<endl;
                    cout<<"They achieve success through their serious, matter-of-fact approach to life, and they also don’t like to waste time on superfluous relationships. "<<endl;
                    cout<<"That means if a Capricorn expresses interest, they really like you. "<<endl;
                    cout<<"At first, Capricorn’s dating style can seem fairly traditional: no-frills restaurants, movie dates, and responsibly paced sleepovers. "<<endl;
                    cout<<"But as Capricorn warms up, they'll reveal their wild side. "<<endl;
                    cout<<"Inside every Capricorn is a big-time troublemaker, and you’ll know you’ve earned Cap’s trust when that inner rabble-rouser comes out to play."<<endl;
                    cout<<"Despite their secret badassery, Capricorns always needs to work on not treating their partners like their employees. "<<endl;
                    cout<<"Capricorns can be very cold in relationships, especially when they’re feeling scared of vulnerability."<<endl;
                    cout<<"Caps must remember to lighten up, and accept other people’s flaws — even imperfections are beautiful."<<endl;
                     break;
                  case 4:
                    cout<<"EXIT"<<endl;
                    break;
                }
            }while(ch<=3);
        }
        
        // AQUARIUS

        else if((m==1&&d>=20)||(m==2&&d<=18))
        { 
            cout<<"AQUARIUS : "<<"  "<<"..-\"-._.-\"-._.-"<<endl;
            cout<<"           "<<"  "<<"..-\"-._.-\"-._.-"<<endl;
            cout<<endl;
             do{
                cout<<"**********MENU**********"<<endl;
                cout<<"What Do You Want To Know?"<<endl;
                cout<<"1.Basic Traits"<<endl;
                cout<<"2.Career"<<endl;
                cout<<"3.Love"<<endl;
                cout<<"4.Exit"<<endl;
                cout<<"Enter your Choice:"<<endl;
                cin>>ch;
                switch(ch)
                {
                  case 1:
                    cout<<"*******BASIC TRAITS*******"<<endl;
                    cout<<"Aquarius"<<endl;
                    cout<<"Despite the word “aqua” in its name, Aquarius is actually the last air sign of the zodiac. "<<endl;
                    cout<<"Aquarius is represented by the water bearer, the mystical healer who bestows water, or life, upon the land. "<<endl;
                    cout<<"Accordingly, Aquarius is the most humanitarian astrological sign. "<<endl;
                    cout<<"These revolutionary thinkers fervently support “power to the people,” aspiring to change the world through radical social progress. "<<endl;
                    cout<<"Every Aquarian is a rebel at heart: These air signs despise authority and anything that represents conventionality. "<<endl;                    
                    cout<<"Free-spirited and eccentric, they can often be identified by their offbeat fashion sensibilities, unusual hobbies, and nonconformist attitude."<<endl;
                     break;
                  case 2:
                    cout<<"*******CAREER*******"<<endl;
                    cout<<"Aquarius"<<endl;
                    cout<<"Aquarians are true, free spirits. "<<endl;
                    cout<<"But don't mistake this for flighty workers—they're hardworking, albeit with an out-of-the-box attitude (i.e. you will tackle a project in the middle of the night if you can't sleep, only to want to nap in the middle of the day because you already did the work "<<endl;
                    cout<<"You're social but also kind of a loner, making you adept at handling team assignments as well as working on your own."<<endl;
                    cout<<"You tend to come up with ideas that at first thought are wacky before being deemed brilliant, and you tend to never state the obvious which make you bad in project discussions, since you're 2 steps ahead of everyone else. "<<endl;
                    cout<<"Take it from Fox: Your unusual methods can be quite appealing to those who enjoy being near your personal brand of creative genius."<<endl;
                    cout<<"Meaning, not everyone is going to get you. "<<endl;
                    cout<<"Ideal careers: "<<endl;
                    cout<<"Science or tech (if you can explore new theories or applications), graphic design or photography, and even project management—if you get to explore new ways of doing something. "<<endl;
                    cout<<"You're also an ideal entrepreneur or independent contractor, as you rebel against corporate culture and work best on your own schedule."<<endl;
                     break;
                  case 3:
                    cout<<"*******LOVE*******"<<endl; 
                    cout<<"Aquarius"<<endl;
                    cout<<"Aquarius is often misconceived as a water sign due to the aqua prefix, but in fact, it's the last air sign of the zodiac. "<<endl;
                    cout<<"Aquarius is symbolized by an altruistic healer bestowing the gift of water (life) upon the land (Aquarius is the water bearer). "<<endl;
                    cout<<"Aquarians are the opposite sign of monarch Leo: They represent the people. "<<endl;
                    cout<<"As the most humanitarian sign of the zodiac, they care deeply about issues relating to the greater good. "<<endl;
                    cout<<"And since Aquarians are most impassioned by the spirit of egalitarianism, interpersonal relationships are often difficult for these righteous rebels. "<<endl;
                    cout<<"Aquarians are not particularly affectionate, so romance tends to look a lot like friendship for these air signs."<<endl;
                    cout<<"They love thinking outside of the box, so their dating style is often unconventional, relaxed, and eccentric. "<<endl;
                    cout<<"The most important thing to know about dating an Aquarius is that they need their space. "<<endl;
                    cout<<"Alone time is absolutely critical for Aquarians, and they will revolt if they feel claustrophobic. "<<endl;
                    cout<<"The Aquarius lover should always try to be more present, and communicate their need for independence without hurting feeling through harsh aloofness. "<<endl;
                    cout<<"Aquarians do care, but they have their own, quirky way of showing it."<<endl;
                     break;
                  case 4:
                    cout<<"EXIT"<<endl;
                    break;
                }
            }while(ch<=3);
                   
       }

        // PISCES
        
        else if((m==2&&d>=19)||(m==3&&d<=20))
        {
            cout<<"PISCES : "<<"  "<<"   `-.    .-' "<<endl;
            cout<<"         "<<"  "<<"      :  :   "<<endl;
            cout<<"         "<<"  "<<"    --:--:--   "<<endl;
            cout<<"         "<<"  "<<"      :  :     "<<endl;
            cout<<"         "<<"  "<<"   .-`    `-.     "<<endl;
            cout<<endl;
             do{
                cout<<"**********MENU**********"<<endl;
                cout<<"What Do You Want To Know?"<<endl;
                cout<<"1.Basic Traits"<<endl;
                cout<<"2.Career"<<endl;
                cout<<"3.Love"<<endl;
                cout<<"4.Exit"<<endl;
                cout<<"Enter your Choice:"<<endl;
                cin>>ch;
                switch(ch)
                {
                  case 1:
                    cout<<"*******BASIC TRAITS*******"<<endl;
                    cout<<"Pisces"<<endl;
                    cout<<"Pisces, a water sign, is the last constellation of the zodiac. "<<endl;
                    cout<<"It's symbolized by two fish swimming in opposite directions, representing the constant division of Pisces's attention between fantasy and reality. "<<endl;
                    cout<<"As the final sign, Pisces has absorbed every lesson — the joys and the pains, the hopes and the fears — learned by all of the other signs. "<<endl;
                    cout<<"This makes these fish the most psychic, empathetic, and compassionate creatures of the astrological wheel. "<<endl;
                    cout<<"With such immense sensitivity, Pisces can easily become swallowed by emotions and must remember to stay grounded in the material realm (appropriately, Pisces rules the feet)."<<endl;
                    break;
                  case 2:
                    cout<<"*******CAREER*******"<<endl;
                    cout<<"Pisces"<<endl;
                    cout<<"Pisces are as flexible as they come when it comes to the workforce—you're not concerned about proving yourself to others, you're only concerned with doing the best you can. "<<endl;
                    cout<<"You can navigate a number of professions, but are generally happiest when you find a job that caters to your sensitive, healing side."<<endl;
                    cout<<"You're compassionate and highly intuitive—making you great in areas that are both healing and restorative, like the arts and medicine."<<endl;
                    cout<<"Ideal careers: "<<endl;
                    cout<<"Anything having to do with healthcare—where you can heal others—is an ideal fit. "<<endl;
                    cout<<"Think nurse, doctor, physical therapist, psychologist, etc."<<endl;
                    cout<<"You also thrive in the arts, like dance and music. "<<endl;
                    cout<<"(Many combine these traits, such as becoming a color therapist or working in arts programs that help troubled teens.) "<<endl;
                     break;
                  case 3:
                    cout<<"*******LOVE*******"<<endl; 
                    cout<<"Pisces"<<endl;
                    cout<<"The final sign of the zodiac, Pisces, is represented by two fish swimming in opposite directions. "<<endl;
                    cout<<"This water sign is extremely psychic, emotional, and intuitive, so it’s no surprise that dating a Pisces is like diving into the deepest parts of the vast ocean: exciting, bewildering, and a little scary. "<<endl;
                    cout<<"Pisces are known to be serious party animals, so a Pisces lover will likely enjoy activating their spirituality through mind-altering experiences. "<<endl;
                    cout<<"Sometimes Pisces can become overwhelmed by the depth of their own emotions in a relationship, and these fishes' preferred defence mechanism is swimming away. "<<endl;
                    cout<<"When the going gets tough, it’s not uncommon for Pisces lovers to disappear without a word. "<<endl;
                    cout<<"Pisces should remember that it’s okay to be vulnerable. "<<endl;
                    cout<<"The type of partnership that supports Pisces' intense emotional sides takes commitment, dedication, and lots of hard work to build."<<endl;
                     break;
                  case 4:
                    cout<<"EXIT"<<endl;
                    break;
                }
            }while(ch<=3);
                    
                    
        }

        else
        {
           cout<<"ERROR"<<endl;
        }
        
    }
};



int main()
{
    int m,d;
    Basic b1;
    Date  d1;
    Month m1;
    Zodiac z1;
    b1.get_info();
    d1.get_info();
    m1.get_info();
    z1.Sign();
}