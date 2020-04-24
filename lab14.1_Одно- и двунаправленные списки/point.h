using namespace std;
struct point {
    int data;
    point *next;
};
point* make_list(int n) {
    point *beg;
    point *p, *r;
    beg=new point;
    cout << "Введите значение информационного поля (int): ";
    cin >> beg->data;
    beg->next=0;
    p=beg;
    for (int i=0; i<n-1; i++) {
        r=new point;
        cout << "Введите значение информационного поля (int): ";
        cin >> r->data;
        r->next=0;
        p->next=r;
        p=r;
    }
    return beg;
}
void print_list(point *beg) {
    point *p=beg;
    while (p!=0) {
        cout << p->data << endl;
        p=p->next;
    }
}
point *delete_chetn_elem(point *&beg) {
    point *p=beg;
    point *r=beg;
    if (beg->data%2==0) {
        beg=beg->next;
        delete p;
        return beg;
    }
    while (p->next!=0) {
        p=p->next;
        if (p->next==0&&p->data%2!=0) {
            cout << "Четных элементов в списке нет" << endl;
            return beg;
        }
        if (p->data%2==0) {
            r->next=p->next;
            delete p;
            return beg;
        }
        r=p;
    }
}
void delete_ols(point *&beg) {
    while (beg!=0) {
        point *p=beg->next;
        delete beg;
        beg=p;
    }
}
//двунаправленный список
struct point_dv {
    char *key;
    point_dv *next;
    point_dv *pred;
};
point_dv *make_point_dv() {
    point_dv *p=new point_dv;
    p->next=0;
    p->pred=0;
    char s[50];
    cout << "Введите строку: ";
    cin >> s;
    p->key=new char[strlen(s)+1];
    strcpy(p->key,s);
    return p;
}
point_dv *make_list_dv (int n) {
    point_dv *p, *beg, *r;
    beg=make_point_dv();
    r=beg;
    for (int i=1; i<n; i++) {
        p=make_point_dv();
        p->pred=r;
        r->next=p;
        r=p;
    }
    return beg;
}
void print_dv (point_dv *beg) {
    point_dv *p=beg;
    while (p!=0) {
        cout << p->key << endl;
        p=p->next;
    }
};
void delete_dv(point_dv *&beg) {
    while (beg!=0) {
        point_dv *p=beg->next;
        delete beg;
        beg=p;
    }
}
point_dv *add_dv(point_dv *&beg, int k) {
    point_dv *elem, *p;
    if (k==1) {
        elem=make_point_dv();
        elem->next=beg;
        beg->pred=elem;
        beg=elem;
        return beg;
    }
    p=beg;
    for (int i=2; i<k&&p->next!=0; i++) {
        p=p->next;
    }
    if (p->next == 0) {
        cout << "Элемента с таким номером нет" << endl;
        return beg;
    }
    elem=make_point_dv();
    elem->next=p->next;
    p->next=elem;
    elem->next->pred=elem;
    elem->pred=p;
    return beg;
}
