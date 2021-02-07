# robotrad

# What will the tool provide:
  * Some statistics: 
       * Median
       * Average
       * Moving average (Different type)
       * Pattern recognition
       * SNR?
       * Filters Kalman etc...
  * ML/AI
      * Training the AI/ML on the huge list of data
          * Possibilities of different type of trading
          
  * Graphical tools to apply the math behind as wished.
  * Graphical tools to see the different patterns that are found by the software.
  * Graphical tools to see how is the training going on.
  
        
# Resources

 * Trending functions math:
    * https://study.com/academy/lesson/what-is-a-trend-line-in-math-definition-equation-analysis.html

 * Tensor flow has a cpp framework toolbox.
  
 # AP
 * Create the core of the tool. This will allow to create and valid the functionalities. (Forget for now the software UI)
 * Create a simple console action -> have the possible to execute different function via console.
 * Create a tool to register the data in a efficient database
      * Database: what is the most efficient database.
      * Database: Find a framework to the database
      * Database: Implement and test with many stocks
      * Database: Find an API that will allow to retrieve the trade information
      * Database: Find an API that will allow to read the data from the internet regarding the specific information of the stocks
 * Learn about AI:
      * AI: Processing data from the trade and train the AI for different variable:
          * The news. The positive, negativity, neutrality should be provided with a score. P0
          * The timeline to analyse: The relevant timeframe should be AI oriented. P1
          * Some pattern analysis:  P2
              * To name a few (phases, crossing EMA, MA) TL..
              * Support line TL
              * To be able to feed different type of algorihm the the input data.
          * Result should be take buy/short, and exit requests. P2
 * Implement first AI pipeline:
  | News Time Frame requirement AI trained | --> | news AI | ------------------------------------------------> | 
  Per algorithm: | Time Frame AI | --> | Data Raw | --> | Transform and adapt | --> | Decision statistic | --> | --> | AI Decision Send yes no | 
  * The per algorith the time frame AI is taken from the previous learning runs for a timeframe according to a parameter (short/mid/long term in 1h/ days/ weeks. This way the software is able to take decision
  * Fix performance issues.
  * Implment UI
      
