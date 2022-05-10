//--------------------------------------------------------------------
//
//  Laboratory 8                                          listrec.h
//
//  Class declarations for a partial linked list implementation of
//  the List ADT with additional recursive linked list functions
//
//--------------------------------------------------------------------

template < class DT >         // Forward declaration of the List class
class List;

template < class DT >
class ListNode                // Facilitator class for the List class
{
  private:

    // Constructor
    ListNode ( const DT &initData, ListNode *nextPtr );

    // Data members
    DT dataItem;        // List data item
    ListNode *next;    // Pointer to the next list node

  friend class List<DT>;
};

//--------------------------------------------------------------------

template < class DT >
class List
{
  public:

    // Constructor
   // List ( int ignored = 0 );
	List ();

    // Destructor
    ~List ();

    // List manipulation functions
    void insert ( const DT &newData );         // Insert after cursor
    void clear ();                             // Clear list

    // Output the list structure -- used in testing/debugging
    void showStructure () const;

    // functions for getting recursive things going
    void write () const;                       // Output list data items
    void insertEnd ( const DT &newData );      // Insert at end
	void aBeforeb ();                          // In-lab Exercise 3
    


  private:

    // Recursive partners of the Prelab functions
    void writeSub ( ListNode<DT> *p ) const;
    void insertEndSub ( ListNode<DT> *&p, const DT &newElement );

    // Recursive partners of the In-lab functions
    void aBeforebSub ( ListNode<DT> *&p );        // In-lab Exercise 3

  private:

    // Data members
    ListNode<DT> *head,     // Pointer to the beginning of the list
                 *cursor;   // Cursor pointer
};
