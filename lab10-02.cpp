int main()
{
    string name;
    int level;
    cin >> name >> level;
    Hero m(name,level);
    cout << m.getName() << " " << m.getLevel();
}
